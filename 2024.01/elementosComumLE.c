#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct cell {
  int item;

  struct cell *proximo;
} Cell;

typedef struct {
  Cell *head;
} ListaE;

Cell *criar_celula(int key) {
  Cell *c = (Cell *)malloc(sizeof(Cell));
  c->item = key;

  c->proximo = NULL;

  return c;
}

ListaE *criar_listaE() {
  ListaE *l = (ListaE *)malloc(sizeof(ListaE));

  l->head = NULL;

  return l;
}

int listaE_vazia(ListaE *l) { return (l == NULL) || (l->head == NULL); }

int procurar(int key, ListaE *l) {
  Cell *aux;

  if (l != NULL) {
    aux = l->head;

    while (aux != NULL) {
      if (aux->item == key) return 1;

      aux = aux->proximo;
    }
  }

  return 0;
}

void inserir_primeiro(int key, ListaE *l) {
  Cell *aux;

  if (l == NULL) l = criar_listaE();

  aux = criar_celula(key);

  aux->proximo = l->head;

  l->head = aux;
}

void inserir_ultimo(int key, ListaE *l) {
  Cell *aux, *novo;

  if (listaE_vazia(l))
    inserir_primeiro(key, l);
  else {
    aux = l->head;

    while (aux->proximo != NULL) aux = aux->proximo;

    novo = criar_celula(key);

    aux->proximo = novo;
  }
}

int remover(ListaE *lista, int valor) {
  if (lista == NULL) {
    return 0;
  }

  Cell *atual = lista->head;
  int valorRemovido = 0;

  if (atual->item == valor) {
    valorRemovido = atual->item;
    lista->head = atual->proximo;
    free(atual);
    return valorRemovido;
  }

  while (atual->proximo != NULL && atual->proximo->item != valor) {
    atual = atual->proximo;
  }

  if (atual->proximo == NULL) {
    return 0;
  }

  Cell *temp = atual->proximo;
  valorRemovido = temp->item;
  atual->proximo = temp->proximo;
  free(temp);

  return valorRemovido;
}

void imprimir(ListaE *l) {
  Cell *aux;

  if (!listaE_vazia(l)) {
    aux = l->head;

    while (aux != NULL) {
      printf("%d ", aux->item);

      aux = aux->proximo;
    }

    printf("\n");
  }
}

int liberar_LE(ListaE *l) {
  Cell *aux = NULL;

  if (l != NULL) {
    while (l->head != NULL) {
      aux = l->head;

      l->head = aux->proximo;

      free(aux);
    }

    free(l);

    return 1;
  }

  return 0;
}

int tamanho_LE(ListaE *l) {
  Cell *aux;
  int tam = 0;

  if (!listaE_vazia(l)) {
    aux = l->head;

    while (aux != NULL) {
      aux = aux->proximo;

      tam++;
    }
  }

  return tam;
}

ListaE *bubbleSort(ListaE *lista) {
  Cell *temp = lista->head;
  Cell *temp2 = lista->head;
  int aux = 0;

  while (temp != NULL) {
    while (temp2->proximo != NULL) {
      if (temp2->item > temp2->proximo->item) {
        aux = temp2->item;
        temp2->item = temp2->proximo->item;
        temp2->proximo->item = aux;
      }

      temp2 = temp2->proximo;
    }

    temp2 = lista->head;
    temp = temp->proximo;
  }

  return lista;
}

ListaE *elementosComum(ListaE *lista1, ListaE *lista2) {
  ListaE *listaComum = criar_listaE();
  Cell *atual1 = lista1->head, *atual2 = lista2->head;

  while (atual1 != NULL) {
    atual2 = lista2->head;

    while (atual2 != NULL) {
      if (atual1->item == atual2->item) {
        inserir_ultimo(atual1->item, listaComum);
        break;
      }
      atual2 = atual2->proximo;
    }
    atual1 = atual1->proximo;
  }

  listaComum = bubbleSort(listaComum);

  return listaComum;
}

int main() {
  ListaE *lista1, *lista2, *listaComum;
  lista1 = criar_listaE();
  lista2 = criar_listaE();
  listaComum = criar_listaE();

  int num = 0;

  while (num != -1) {
    scanf("%d", &num);

    if (num != -1) {
      inserir_ultimo(num, lista1);
    }
  }

  num = 0;
  while (num != -1) {
    scanf("%d", &num);

    if (num != -1) {
      inserir_ultimo(num, lista2);
    }
  }

  listaComum = elementosComum(lista1, lista2);

  imprimir(listaComum);

  return 0;
}