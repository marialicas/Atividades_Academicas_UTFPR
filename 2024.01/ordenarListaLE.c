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

int remover(ListaE* lista, int valor) {
  if (lista->proximo == NULL) {
    return 0;
  }

  if (lista->proximo->valor == valor) {
    removerPrimeiro(lista);
    return 1;
  }

  return remover(lista->proximo, valor);
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
    scanf("%d", &valor);

    if (valor != -1) {
      inserir(lista, valor);
    }
  } while (valor != -1);

  return lista;
}

ListaE* bubbleSort(ListaE* lista) {
  ListaE* temp = lista->proximo;
  ListaE* temp2 = lista->proximo;
  int aux = 0;

  while (temp != NULL) {
    while (temp2->proximo != NULL) {
      if (temp2->valor > temp2->proximo->valor) {
        aux = temp2->valor;
        temp2->valor = temp2->proximo->valor;
        temp2->proximo->valor = aux;
      }

      temp2 = temp2->proximo;
    }

    temp2 = lista->proximo;
    temp = temp->proximo;
  }

  return lista;
}

int main() {
  ListaE* lista = lerInput();

  lista = bubbleSort(lista);

  printarLista(lista);

  liberarLista(lista);

  return 0;
}