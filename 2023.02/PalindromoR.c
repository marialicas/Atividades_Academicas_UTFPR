#include <stdio.h>
#include <stdlib.h>

int palindromo(char str[], int inicio, int fim) {
  if (inicio == fim || fim < inicio + 1) {
    printf("palindromo\n");
    return 1;
  }

  if (str[inicio] != str[fim]) {
    printf("nao palindromo\n");
    return 0;
  }

  return palindromo(str, inicio + 1, fim - 1);
}

int main() {
  char str[100];
  int i = 0, j;

  scanf("%s", str);

  for (j = 0; str[j] != '\0'; j++) {
  }

  palindromo(str, i, j - 1);

  return 0;
}
