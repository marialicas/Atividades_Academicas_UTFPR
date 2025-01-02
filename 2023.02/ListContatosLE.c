#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_SIZE 100

typedef char *String;

typedef struct {
  String nomes[MAX_SIZE];
  int tamanho;
} Lista;

Lista *criar_lista() {
  int indiceLista;
  Lista *l = (Lista *)malloc(sizeof(Lista));

  for (indiceLista = 0; indiceLista < MAX_SIZE; indiceLista++) {
    l->nomes[indiceLista] = (String)calloc(MAX_SIZE, sizeof(char));
  }

  l->tamanho = 0;

  return l;
}

void inserir(Lista *l, String nome) {
  int tamanho = l->tamanho, indiceLetra;
  String nomeAtual = l->nomes[tamanho];

  for (indiceLetra = 0; nome[indiceLetra] != '\0'; indiceLetra++) {
    nomeAtual[indiceLetra] = nome[indiceLetra];
  }

  l->tamanho++;
}

void imprimir_lista(Lista *l) {
  int tamanho = l->tamanho, indiceLista;
  String nome;

  for (indiceLista = 0; indiceLista < tamanho; indiceLista++) {
    nome = l->nomes[indiceLista];

    printf("%s\n", nome);
  }
}

void contatos_econtrados(Lista *contatos, int qtde, String sub) {
  int indiceLista, indiceLetra, indiceSub, qtdeSub = strlen(sub);
  Lista *listaSub = criar_lista();
  String nome;
  char letra;

  for (indiceLista = 0; indiceLista < qtde; indiceLista++) {
    nome = contatos->nomes[indiceLista];
    letra = nome[0];

    for (indiceLetra = 0; letra != '\0'; indiceLetra++) {
      letra = nome[indiceLetra];

      if (letra == sub[0]) {
        for (indiceSub = 1; sub[indiceSub] != '\0'; indiceSub++) {
          letra = nome[indiceLetra + indiceSub];

          if (letra != sub[indiceSub]) {
            break;
          }
        }

        if (indiceSub == qtdeSub) {
          inserir(listaSub, nome);
        }
      }
    }
  }

  imprimir_lista(listaSub);
}

int main() {
  Lista *contatos = criar_lista();
  char strP[100], nome[100];
  int qtde, i;

  scanf("%s", strP);
  scanf("%d", &qtde);

  for (i = 0; i < qtde; i++) {
    scanf("%s", nome);
    inserir(contatos, nome);
  }

  contatos_econtrados(contatos, qtde, strP);

  return 0;
}
