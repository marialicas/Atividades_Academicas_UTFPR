#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int pesquisaBinSeq(int numP, int vetor[], int tamV, int tamM) {
  int fim = tamV, inicio = 0, meio, indice = -1;

  while ((fim - inicio) > tamM) {
    meio = (int)((fim + inicio - 1) / 2);

    if (vetor[meio] < numP) {
      inicio = meio + 1;
    } else if (vetor[meio] > numP) {
      fim = meio;
    } else {
      return meio;
    }
  }

  for (int i = inicio; i < fim; i++) {
    printf("%d ", vetor[i]);
    if (vetor[i] == numP) {
      indice = i;
    }
  }
  printf("\n");

  return indice;
}

int main() {
  int numP, tamV, tamM;

  scanf("%d", &numP);
  scanf("%d", &tamV);

  int vetor[tamV];
  for (int i = 0; i < tamV; i++) {
    scanf("%d", &vetor[i]);
  }

  scanf("%d", &tamM);

  printf("%d", pesquisaBinSeq(numP, vetor, tamV, tamM));
  return 0;
}
