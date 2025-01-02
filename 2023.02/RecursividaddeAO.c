#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void insertsortRecursivo(int vetor[], int tamV, int indice) {
  int x, j;
  if (tamV == 1) {
    return;
  } else {
    x = vetor[indice];
    for (j = indice - 1; (j >= 0) && (x < vetor[j]); j--) {
      vetor[j + 1] = vetor[j];
    }
    vetor[j + 1] = x;
    indice++;
    tamV--;
    return insertsortRecursivo(vetor, tamV, indice);
  }
}

int main() {
  int tamV;

  scanf("%d", &tamV);
  int vetor[tamV];

  for (int i = 0; i < tamV; i++) {
    scanf("%d", &vetor[i]);
  }

  insertsortRecursivo(vetor, tamV, 1);

  for (int z = 0; z < tamV; z++) {
    printf("%d ", vetor[z]);
  }
  return 0;
}