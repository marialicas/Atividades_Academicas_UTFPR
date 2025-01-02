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

  int esquerda = alturaArvore(raiz->esquerdo, alturaArvore+1);
  int direita = alturaArvore(raiz->direito, alturaArvore+1);

  int maior;

  if(esquerda > direita) {
    maior = esquerda;
  }
  else {
    maior = direita;
  }

  return maior;
}

No* lerInput(int qtdeNo) {
  No* arvore;
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

int main() {
  No* arvore;
  int qtdeNo = 0;
  int nosFaltando = 0;

  scanf("%d", &qtdeNo);
  arvore = lerInput(qtdeNo);

  nosFaltando = nosFaltantes(arvore, qtdeNo);
  printf("%d", nosFaltando);

  return 0;
}