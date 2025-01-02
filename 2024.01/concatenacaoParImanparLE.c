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

ListaE* lerInput() {
  ListaE* lista = criarLista();

  int valor = 0;

  do {
    scanf("%d", &valor);

    if (valor != -1) {
      inserir_ultimo(lista, valor);
    }
  } while (valor != -1);

  return lista;
}

ListaE *juncaoParesImpares(ListaE *l1, ListaE *l2){
  ListaE *l3 = criar_listaE(); 
  Cell *atual1 = l1->head, *atual2 = l2->head;

  if(atual1 != -1){
    if(atual1->item % 2 == 0){
      inserir_ultimo(atual1->item, l3);
    }
    atual1 = atual1->proximo;
  }

  return l3;


}

int main() {
  ListaE *l1 = lerInput, *l2 = lerInput;

  imprimir(juncaoParesImpares(l1, l2));

  liberar_LE(l1);
  liberar_LE(l2);

  return 0;
}