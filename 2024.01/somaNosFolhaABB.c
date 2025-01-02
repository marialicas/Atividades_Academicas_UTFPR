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

void remover(No* raiz, int valor) {
  if (raiz == NULL) {
    return;
  }

  if (valor == raiz->valor &&
      (raiz->esquerdo == NULL && raiz->direito == NULL)) {
    raiz = NULL;
    return;
  }

  if (raiz->esquerdo == NULL) {
    No* temp = raiz->direito;
    raiz->valor = temp->valor;
    raiz->esquerdo = temp->esquerdo;
  }
}

void printarArvore(No* raiz) {
  if (raiz == NULL) {
    return;
  }

  printarArvore(raiz->esquerdo);
  printarArvore(raiz->direito);
  printf("%d\n", raiz->valor);
}

int no_folha(No* no) { return (no->direito == NULL && no->esquerdo == NULL); }

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

int somaNoFolha(No* arvore) {
  if (arvore == NULL) {
    return 0;
  }
  if (no_folha(arvore)) {
    return arvore->valor;
  }

  int somaEsquerda = somaNoFolha(arvore->esquerdo);
  int somaDireita = somaNoFolha(arvore->direito);

  return somaDireita + somaEsquerda;
}

No* lerInput(int qtdeNo) {
  No* arvore = 0;
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

int arvoreCheia(int altura) { return pow(2, altura + 1) - 1; }

int main() {
  int qtdeNo = 0;
  No* arvore;

  scanf("%d", &qtdeNo);
  arvore = lerInput(qtdeNo);

  printf("%d", somaNoFolha(arvore));

  return 0;
}