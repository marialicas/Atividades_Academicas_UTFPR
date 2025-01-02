#include <math.h>
#include <stdio.h>
#include <stdlib.h>

typedef struct no {
  struct no* esquerdo;
  struct no* direito;
  int valor;
} No;

No* criarNo(int valor) {
  No* novoNo = (No*)malloc(sizeof(No));

  novoNo->esquerdo = NULL;
  novoNo->direito = NULL;
  novoNo->valor = valor;

  return novoNo;
}

void inserir(No* raiz, int valor) {
  if (raiz == NULL) {
    return;
  }

  if (valor == raiz->valor) {
    return;
  }

  if (valor < raiz->valor) {
    if (raiz->esquerdo == NULL) {
      raiz->esquerdo = criarNo(valor);
      return;
    }
    inserir(raiz->esquerdo, valor);
    return;
  }

  if (raiz->direito == NULL) {
    raiz->direito = criarNo(valor);
    return;
  }

  inserir(raiz->direito, valor);
}

No* getLowest(No* raiz) {
  if (raiz->esquerdo == NULL) {
    return raiz;
  }

  return getLowest(raiz->esquerdo);
}

No* getHighest(No* raiz) {
  if (raiz->direito == NULL) {
    return raiz;
  }

  return getHighest(raiz->direito);
}

//
void printarArvore(No* raiz) {
  if (raiz == NULL) {
    return;
  }

  printf("%d\n", raiz->valor);
  printarArvore(raiz->esquerdo);
  printarArvore(raiz->direito) ;
}

int no_folha(No* no) {
  return (no->direito == NULL && no->esquerdo == NULL);
}

int alturaArvore(No* raiz, int alturaAtual) {
  if (raiz == NULL) {
    return 0;
  }

  if (no_folha(raiz)) {
    return alturaAtual;
  }

  int alturaEsquerda = alturaArvore(raiz->esquerdo, alturaAtual + 1);
  int alturaDireita = alturaArvore(raiz->direito, alturaAtual + 1);
  int maior = 0;

  if (alturaEsquerda >= alturaDireita) {
    maior = alturaEsquerda;
  } else {
    maior = alturaDireita;
  }

  return maior;
}

No* lerInput(int qtdeNo) {
  No* arvore =0;
  int valor;

  for (int i = 0; i < qtdeNo; i++) {
    scanf("%d", &valor);
    if (i == 0) {
      arvore = criarNo(valor);
    } else {
      inserir(arvore, valor);
    }
  }

  return arvore;
}

int arvoreCheia(int altura) {
  return pow(2, altura + 1) - 1;
}

int nosFaltantes(No* raiz, int nos) {
  int altura = alturaArvore(raiz, 0);

  return arvoreCheia(altura) - nos;
}

int caminhoMaiorSoma(No* arvore) {
  if (arvore == NULL) {
    return 0;
  }

  if (no_folha(arvore)) {
    return arvore->valor;
  }

  int somaE = caminhoMaiorSoma(arvore->esquerdo);
  int somaD = caminhoMaiorSoma(arvore->direito);

  if (somaE >= somaD) {
    return somaE + arvore->valor;
  } else {
    return somaD + arvore->valor;
  }
}

int main() {
  int qtdeNo;
  No* arvore;
  scanf("%d", &qtdeNo);

  arvore = lerInput(qtdeNo);

  printf("%d", caminhoMaiorSoma(arvore));

  return 0;
}