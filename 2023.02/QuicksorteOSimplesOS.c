#include <stdio.h>
#include <stdlib.h>

void troca(char **vstr, int p1, int p2) {
  char *str;

  str = vstr[p1];
  vstr[p1] = vstr[p2];
  vstr[p2] = str;
}

int comparar_char(char c1, char c2) {
  if (c1 == c2)
    return 0;
  else if (c1 < c2)
    return -1;
  else
    return 1;
}

int comparar(char s1[], char s2[]) {
  int i;

  for (i = 0; (s1[i] == s2[i]) && (s1[i] != '\0') && (s2[i] != '\0'); i++)
    ;

  return comparar_char(s1[i], s2[i]);
}

void quicksort(char **vstr, int n_cima, int n_baixo, int tamM) {
  if (n_cima < n_baixo) {
    char *pivo = vstr[n_cima];
    int i = n_cima + 1;
    int j = n_baixo;

    while (i <= j && i < tamM && j < tamM) {
      if (comparar(vstr[i], pivo) <= 0) {
        i++;
      } else if (comparar(vstr[j], pivo) > 0) {
        j--;
      } else {
        troca(vstr, i, j);
        i++;
        j--;
      }
    }

    troca(vstr, n_cima, j);
    quicksort(vstr, n_cima, j - 1, tamM);
    quicksort(vstr, j + 1, n_baixo, tamM);
  }
}

void freeMatrix(char **vstr, int tam) {
  for (int i = 0; i < tam; i++) {
    free(vstr[i]);
  }

  free(vstr);
}

void bubblesort(char **vstr, int n) {
  int i, j, t = 1;

  for (i = 0; (i < n - 1) && t; i++) {
    t = 0;

    for (j = 0; j < n - i - 1; j++)
      if (comparar(vstr[j], vstr[j + 1]) > 0) {
        troca(vstr, j, j + 1);
        t = 1;
      }
  }
}

int ordenado(char **vstr, int tam) {
  for (int i = 0; i < tam - 1; i++) {
    if (comparar(vstr[i], vstr[i + 1]) > 0) {
      return 0;
    }
  }

  return 1;
}

void ordenacaoString(char **vstr, int tamV, int tamM) {
  quicksort(vstr, 0, tamV - 1, tamM);

  if (ordenado(vstr, tamV) == 0) {
    bubblesort(vstr, tamV);
  }
}

int main() {
  int tamV, tamM;

  scanf("%d", &tamV);

  char **vstr = (char **)(malloc(sizeof(char *) * tamV));

  for (int i = 0; i < tamV; i++) {
    vstr[i] = (char *)calloc(sizeof(char) * 50, 1);
    scanf("%s", vstr[i]);
  }

  scanf("%d", &tamM);

  ordenacaoString(vstr, tamV, tamM);

  for (int i = 0; i < tamV; i++) {
    printf("%s\n", vstr[i]);
  }

  freeMatrix(vstr, tamV);

  return 0;
}