#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
  int **matris;
  int linha;
  int coluna;
} Matriz;

Matriz *criarMatriz(int linha, int coluna) {
  Matriz *m = (Matriz *)malloc(sizeof(Matriz));

  m->linha = linha;
  m->coluna = coluna;

  m->matris = (int **)malloc(sizeof(int *) * linha);

  for (int i = 0; i < linha; i++) {
    m->matris[i] = (int *)malloc(sizeof(int) * coluna);
  }

  return m;
}

int *obter_linha(Matriz *m, int i) { return m->matris[i]; }

int *obter_coluna(Matriz *m, int i) {
  int *coluna = (int *)malloc(sizeof(int) * m->linha);

  for (int linha = 0; linha < m->linha; linha++) {
    coluna[linha] = m->matris[linha][i];
  }
  return coluna;
}

void inserir(Matriz *m, int valorInserir, int posicaoLinha, int posicaoColuna) {
  m->matris[posicaoLinha][posicaoColuna] = valorInserir;
}

Matriz *obter_submat(Matriz *m, int lInicial, int cInicial, int lFinal,
                     int cFinal) {
  int linhas = lFinal - lInicial + 1;
  int colunas = cFinal - cInicial + 1;
  int valor;

  Matriz *subMatriz = criarMatriz(linhas, colunas);

  for (int i = 0; i < linhas; i++) {
    for (int j = 0; j < colunas; j++) {
      valor = m->matris[lInicial + i][cInicial + j];
      inserir(subMatriz, valor, i, j);
    }
  }

  return subMatriz;
}

void lerElementos(Matriz *m) {
  int input;

  for (int l = 0; l < m->linha; l++) {
    for (int c = 0; c < m->coluna; c++) {
      scanf("%d", &input);
      inserir(m, input, l, c);
    }
  }
}

void imprimirVetor(int *vetor, int tamanho) {
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", vetor[i]);
  }
  printf("\n");
  printf("\n");
}

void imprimirMatriz(Matriz m) {
  for (int i = 0; i < m.linha; i++) {
    for (int j = 0; j < m.coluna; j++) {
      printf("%d ", m.matris[i][j]);
    }
    printf("\n");
  }
  printf("\n");
  printf("\n");
}

int main() {
  Matriz *m, *submatriz;
  int linha, coluna, *l, *c, linhaFinal, colunaFinal;

  scanf("%d %d", &linha, &coluna);

  m = criarMatriz(linha, coluna);

  lerElementos(m);

  scanf("%d %d", &linha, &coluna);

  l = obter_linha(m, linha);
  imprimirVetor(l, m->coluna);
  c = obter_coluna(m, coluna);
  imprimirVetor(c, m->linha);

  scanf("%d %d %d %d", &linha, &coluna, &linhaFinal, &colunaFinal);

  submatriz = obter_submat(m, linha, coluna, linhaFinal, colunaFinal);
  imprimirMatriz(*submatriz);
  return 0;
}