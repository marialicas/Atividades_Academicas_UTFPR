#include <limits.h>
#include <stdio.h>
#include <stdlib.h>

int somaSubSeqMax(int vetor[], int inicio, int fim) {
  int soma = 0, somaDireita = INT_MIN, somaEsquerda = INT_MIN, somaTotal = 0,
      maiorValor = 0;
  if (inicio == fim) {
    return vetor[inicio];
  }

  int meio = (inicio + fim) / 2;

  for (int i = meio + 1; i <= fim; i++) {
    soma += vetor[i];
    if (soma > somaDireita) somaDireita = soma;
  }
  soma=0;
  for (int i = meio; i >= inicio; i--) {
    soma += vetor[i];
    if (soma > somaEsquerda) somaEsquerda = soma;
  }

  somaTotal = somaDireita + somaEsquerda;

  int valorDireita = somaSubSeqMax(vetor, meio + 1, fim);
  int valorEsquerda = somaSubSeqMax(vetor, inicio, meio);

  if (valorDireita > valorEsquerda)
    maiorValor = valorDireita;
  else
    maiorValor = valorEsquerda;

  if (maiorValor > somaTotal)
    return maiorValor;
  else
    return somaTotal;
}

int main() {
  int tam;
  scanf("%d", &tam);
  int vetor[tam], valor;

  for (int i = 0; i < tam; i++) {
    scanf("%d", &valor);
    vetor[i] = valor;
  }

  printf("%d", somaSubSeqMax(vetor, 0, tam - 1));

  return 0;
}