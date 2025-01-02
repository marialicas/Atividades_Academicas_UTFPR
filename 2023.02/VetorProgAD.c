#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int *prog_arit(int tam, int raz) {
  int i, *prog;

  prog = (int *)malloc(tam * sizeof(int));

  for (i = 0; i < tam; i++) {
    prog[i] = i * raz;
  }

  return prog;
}

int main() {
  int tam, raz, *vet, i;

  scanf("%d %d", &tam, &raz);
  vet = prog_arit(tam, raz);

  for (i = 0; i < tam; i++) {
    printf("%d ", vet[i]);
  }

  return 0;
}