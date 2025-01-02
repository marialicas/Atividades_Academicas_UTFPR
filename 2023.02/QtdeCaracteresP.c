#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void qtdeCaracter(char str[], char c, int* qtde, float* taxa) {
  int i;

  for (i = 0; str[i] != '\0'; i++) {
    if (str[i] == c) {
      (*qtde)++;
    }
  }

  *taxa = (float)(*qtde) / (float)i;
}

int main() {
  char caractere, str[100];
  int n = 0, *qtde;
  float porc = 0, *taxa;

  qtde = &n;
  taxa = &porc;

  scanf("%s %c", str, &caractere);

  // scanf("%s", str);
  //  fflush(stdin);
  //  scanf("%c", &caractere);

  qtdeCaracter(str, caractere, qtde, taxa);

  printf("%d\n", *qtde);
  printf("%.2f", *taxa);

  return 0;
}