#include <stdio.h>
#include <stdlib.h>

typedef struct ListaE {
  struct ListaE* proximo;
  int tamanho;
  int valor;
} ListaE;

ListaE* criarLista() {
  ListaE* lista = (ListaE*)malloc(sizeof(ListaE));

  lista->proximo = NULL;
  lista->tamanho = 0;
  lista->valor = 0;

  return lista;
}

void inserir(ListaE* lista, int valor) {
  if (lista->proximo == NULL) {
    lista->proximo = criarLista();
    lista->proximo->valor = valor;
  } else {
    inserir(lista->proximo, valor);
  }

  lista->tamanho++;
}

int removerPrimeiro(ListaE* lista) {
  ListaE* temp = lista->proximo;
  int valor = temp->valor;

  lista->proximo = temp->proximo;
  lista->tamanho--;

  free(temp);

  return valor;
}

void liberarLista(ListaE* lista) {
  if (lista->proximo != NULL) {
    liberarLista(lista->proximo);
  }

  free(lista);
}

void printarLista(ListaE* lista) {
  while (lista->proximo != NULL) {
    printf("%d ", lista->proximo->valor);
    lista = lista->proximo;
  }

  printf("\n");
}

ListaE* lerInput() {
  ListaE* lista = criarLista();

  int valor = 0;

  do {
    scanf_s("%d", &valor);

    if (valor != -1) {
      inserir(lista, valor);
    }
  } while (valor != -1);

  return lista;
}

int main() {
  ListaE* lista1 = lerInput();
  ListaE* lista2 = criarLista();
  int tamanho = lista1->tamanho;

  for (int i = 0; i < tamanho / 2; i++) {
    inserir(lista2, removerPrimeiro(lista1));
  }

  printarLista(lista2);
  printarLista(lista1);

  liberarLista(lista1);
  liberarLista(lista2);

  return 0;
}