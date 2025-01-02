#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int BinarioInterativa(int vetor[], int numCT, int tamV) {
  int inicio = 0, fim = tamV, meio;

  while ((fim - inicio) != 1) {
    meio = inicio + (int)((fim - inicio) / 2);

    if (vetor[meio] <= numCT) {
      inicio = meio;
    } else {
      fim = meio;
    }
  }
  for (int i = inicio; i < fim; i++) {
    if (vetor[i] == numCT) {
      return i;
    }
  }

  return -1;
}

int main() {
  int tamV, qtdeCT, numCT;

  scanf("%d", &tamV);
  int vetor[tamV];

  for (int i = 0; i < tamV; i++) {
    scanf("%d", &vetor[i]);
  }
  scanf("%d", &qtdeCT);
  for (int j = 0; j < qtdeCT; j++) {
    scanf("%d", &numCT);

    printf("%d\n", BinarioInterativa(vetor, numCT, tamV));
  }
  return 0;
}