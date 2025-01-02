#include <math.h>
#include <stdio.h>
#include <stdlib.h>

int qtdeFormasTroco(int moedas[], int qtdeMoedas, int troco) {
  int 
}

int main() {
  int troco, qtdeMoedas, moeda;

  scanf("%d", &troco);
  scanf("%d", &qtdeMoedas);
  int moedas[qtdeMoedas];

  for (int i = 0; i < qtdeMoedas; i++) {
    scanf("%d", &moeda);
    moedas[i] = moeda;
  }

  printf("%d", qtdeFormasTroco(moedas, qtdeMoedas, troco));
  return 0;
}
