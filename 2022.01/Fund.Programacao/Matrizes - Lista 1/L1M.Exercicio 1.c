/*1) Criar um arquivo "matrizes.h". Dentro desse arquivo incluir função para:
a) Gerar uma matriz de elementos inteiros randômicos entre 1 e limite com o protótipo:
void gerarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna], int
limite)
b) Mostrar uma matriz com o protótipo:
void mostrarMatrizInteiro(int linha, int coluna, int matriz[linha][coluna])
Usar as funções para:
a) Gerar uma matriz de 3x3 com números aleatórios entre 1 e 10.
b) Somar todos os elementos da matriz.
c) Somar os elementos da diagonal principal da matriz.
d) Somar os elementos da diagonal secundária da matriz.
e) Mostrar a matriz e as somas.*/

#include<stdio.h>
#include<time.h>
#include<stdlib.h>
#include"matrizes.h"

int main ()
{
    int matriz[3][3],i,j;
    char opcao;

    do
    {
        printf("=== MATRIZ ====\n");
        gerarMatrizIntde1ALim(3,3,matriz,10);
        mostrarMatriz(3,3,matriz);

        printf("\nSoma dos elementos da diagonal principal: %d\n",somaDiagonalPrincipal(3,3,matriz));
        printf("Soma dos elementos da diagonal secundaria: %d\n",somaDiagonalSecundaria(3,3,matriz));
        printf("Soma dos elementos de todos elementos: %d\n",somaTodosElementos(3,3,matriz));

        printf("\nDeseja repetir o programa (S\N): ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao=='s'|| opcao=='S');
}
