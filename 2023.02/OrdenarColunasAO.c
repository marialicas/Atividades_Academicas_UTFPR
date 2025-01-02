#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void ordernarColunas(int linha, int coluna, float matriz[linha][coluna]) {
  float auxiliar;
  int ordenado = 1;

  while (ordenado == 1) {
    ordenado = 0;
    for (int i = 0; i < linha - 1; i++) {
      for (int j = 0; j < coluna; j++) {
        if (matriz[i][j] < matriz[i + 1][j]) {
          auxiliar = matriz[i + 1][j];
          matriz[i + 1][j] = matriz[i][j];
          matriz[i][j] = auxiliar;
          ordenado = 1;
        }
      }
    }
  }

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      printf("%.1f ", matriz[i][j]);
    }
    printf("\n");
  }
}

int main() {
  int linha, coluna;

  scanf("%d %d", &linha, &coluna);
  float matriz[linha][coluna];

  for (int i = 0; i < linha; i++) {
    for (int j = 0; j < coluna; j++) {
      scanf("%f", &matriz[i][j]);
    }
  }

  ordernarColunas(linha, coluna, matriz);

  return 0;
}