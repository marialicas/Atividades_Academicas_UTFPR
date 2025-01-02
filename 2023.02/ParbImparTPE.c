#include <stdio.h>
#include <stdlib.h>

#define TAM_MAX 100

typedef struct {
  int item[TAM_MAX];
  int topo;
} Pilha;

Pilha *criar_pilha() {
  Pilha *p = (Pilha *)malloc(sizeof(Pilha));

  p->topo = 0;

  return p;
}

int pilha_cheia(Pilha *p) {
  if (p == NULL)
    return -1;
  else if (p->topo >= (TAM_MAX - 1))
    return 1;
  else
    return 0;
}

int pilha_vazia(Pilha *p) {
  if (p == NULL)
    return -1;

  else if (p->topo == 0)
    return 1;
  else
    return 0;
}

int empilhar(Pilha *p, int item) {
  if (p == NULL) {
    p = criar_pilha();
  }

  if (pilha_cheia(p)) {
    return 0;
  }

  p->topo++;

  p->item[p->topo] = item;

  return 1;
}

int desempilhar(Pilha *p) {
  int item = -1;

  if (!pilha_vazia(p)) {
    item = p->item[p->topo];

    p->topo--;
  }

  return item;
}

void imprimir_pilha(Pilha *p) {
  Pilha aux = *p;
  int item;

  while (!pilha_vazia(&aux)) {
    item = desempilhar(&aux);

    printf("%d ", item);
  }

  printf("\n");
}

void liberar_pilha(Pilha *p) {
  if (p != NULL) free(p);
}

int obter_posicao_topo(Pilha *p) {
  if (!pilha_vazia(p))
    return p->topo;
  else
    return -1;
}

int acessar_valor_topo(Pilha *p) {
  if (!pilha_vazia(p))
    return p->item[p->topo];
  else
    return -1;
}

void divPI(Pilha *p1, Pilha *par, Pilha *impar) {
  int num, tam = p1->topo;

  for (int i = 0; i < tam; i++) {
    num = desempilhar(p1);
    if (num % 2 == 0) {
      empilhar(par, num);
    } else {
      empilhar(impar, num);
    }
  }
}

Pilha *concatenarPI(Pilha *p1, Pilha *p2) {
  Pilha *p3, *pPar, *pImpar;
  int i, num, tam;

  p3 = criar_pilha();
  pPar = criar_pilha();
  pImpar = criar_pilha();

  divPI(p1, pPar, pImpar);

  divPI(p2, pPar, pImpar);

  tam = pImpar->topo;
  for (i = 0; i < tam; i++) {
    num = desempilhar(pImpar);
    empilhar(p3, num);
  }
  tam = pPar->topo;
  for (i = 0; i < tam; i++) {
    num = desempilhar(pPar);
    empilhar(p3, num);
  }

  return p3;
}

int main(void) {
  int pTemp;
  Pilha *p1, *p2, *p3;

  p1 = criar_pilha();
  p2 = criar_pilha();

  do {
    scanf("%d", &pTemp);
    if (pTemp != -1) {
      empilhar(p1, pTemp);
    }
  } while (pTemp != -1);

  do {
    scanf("%d", &pTemp);
    if (pTemp != -1) {
      empilhar(p2, pTemp);
    }
  } while (pTemp != -1);

  p3 = concatenarPI(p1, p2);

  imprimir_pilha(p3);

  return 0;
}