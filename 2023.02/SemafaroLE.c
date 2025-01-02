#include <limits.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM_MAX 100

typedef struct Fila Fila;

struct Fila {
  int item[TAM_MAX];
  int ini;
  int fim;
  int tam;
};

Fila *criar_fila() {
  Fila *f = (Fila *)malloc(sizeof(Fila));

  f->ini = -1;
  f->fim = -1;
  f->tam = 0;

  return f;
}

int fila_cheia(Fila *f) {
  if (f == NULL)
    return -1;
  else if (f->tam < TAM_MAX)
    return 0;
  else
    return 1;
}

int fila_vazia(Fila *f) {
  if (f == NULL)
    return -1;
  else if (f->tam > 0)
    return 0;
  else
    return 1;
}

int enfileirar(Fila *f, int chave) {
  if (f == NULL) f = criar_fila();

  if (!fila_cheia(f)) {
    if (f->ini < 0) f->ini = 0;

    if (f->fim < TAM_MAX - 1)
      f->fim++;
    else
      f->fim = 0;

    f->item[f->fim] = chave;

    f->tam++;

    return 1;
  }

  return 0;
}

int desenfileirar(Fila *f) {
  int item = INT_MIN;

  if (!fila_vazia(f)) {
    item = f->item[f->ini];

    if (f->ini < TAM_MAX - 1)
      f->ini++;
    else
      f->ini = 0;

    f->tam--;

    if (f->tam == 0) {
      f->ini = -1;
      f->fim = -1;
    }
  }

  return item;
}

void imprimir_fila(Fila *f) {
  Fila aux = *f;
  int item;

  while (!fila_vazia(&aux)) {
    item = desenfileirar(&aux);

    printf("%d ", item);
  }

  printf("\n");
}

void liberar_fila(Fila *f) {
  if (f != NULL) free(f);
}

int tamanho_fila(Fila *f) {
  if (f != NULL)
    return f->tam;
  else
    return 0;
}

int verificar_inicio(Fila *f) {
  if (!fila_vazia(f))
    return f->item[f->ini];
  else
    return INT_MIN;
}

int verificar_fim(Fila *f) {
  if (!fila_vazia(f))
    return f->item[f->fim];
  else
    return INT_MIN;
}

void semaforo(Fila *e1, Fila *e2, Fila *e3, Fila *r) {
  Fila *atual;
  Fila *estradas[3] = {e1, e2, e3};
  int carro, i, j, tam, cont = 0;

  atual = estradas[0];
  tam = e1->tam + e2->tam + e3->tam;

  for (i = 0, j = 0; i < tam; i++, cont++) {
    if (cont == 3 || fila_vazia(atual)) {
      j++;
      j = j % 3;
      atual = estradas[j];
      cont = 0;
    }
    carro = desenfileirar(atual);
    if (carro != INT_MIN) {
      enfileirar(r, carro);
    } else {
      tam++;
    }
  }
}

int main() {
  Fila *e1, *e2, *e3, *r;
  int num = 0;

  e1 = criar_fila();
  e2 = criar_fila();
  e3 = criar_fila();
  r = criar_fila();

  while (num != -1) {
    scanf("%d", &num);
    if (num != -1) {
      enfileirar(e1, num);
    }
  }
  num = 0;
  while (num != -1) {
    scanf("%d", &num);
    if (num != -1) {
      enfileirar(e2, num);
    }
  }
  num = 0;
  while (num != -1) {
    scanf("%d", &num);
    if (num != -1) {
      enfileirar(e3, num);
    }
  }

  semaforo(e1, e2, e3, r);
  imprimir_fila(r);

  return 0;
}