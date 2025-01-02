#include<stdio.h>
#include<stdlib.h> //rand srand
#include<time.h>
void gerarMatrizIntDe0ALim (int linha, int coluna, int matriz[linha][coluna],int lim);
void mostrarMatriz (int linha,int coluna, int matriz[linha][coluna]);
int somaDiagonalPrincipal (int linha,int coluna, int matriz [linha][coluna]);
int somaDiagonalSecundaria (int linha,int coluna, int matriz[linha][coluna]);
int somaTodosElementos (int linha, int coluna, int matriz[linha][coluna]);
int main ()
{
    int l,c,lim;

    printf("Informe a quantidade de linha: ");
    scanf("%d",&l);
    printf("Informe a quantidade de coluna: ");
    scanf("%d",&c);
    printf("Informe um limite: ");
    scanf("%d",&lim);

    int matriz[l][c];

    printf("\n---- MATRIZ ----\n");
    gerarMatrizIntDe0ALim(l,c,matriz,lim);
    mostrarMatriz(l,c,matriz);

    printf("\nSoma da Diagonal Principal: %d\n",somaDiagonalPrincipal(l,c,matriz));
    printf("Soma da diagonal secundaria: %d\n",somaDiagonalSecundaria(l,c,matriz));
    printf("Soma de todos os elementos da matriz: %d\n",somaTodosElementos(l,c,matriz));
    printf("Soma da Linha: %d\n",somaLinha(l,c,matriz));

    return 0;
}

void gerarMatrizIntDe0ALim (int linha, int coluna, int matriz[linha][coluna],int lim)
{
    int i,j;
    srand(time(NULL));

    for(i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
           matriz[i][j]= rand() % (lim+1); // 0 a limite / lim+1 = de 1 a limite
        }
    }
}

void mostrarMatriz (int linha,int coluna,int matriz[linha][coluna])
{
    int i,j;
    for(i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            printf("%.2d ", matriz[i][j]);
        }
        printf("\n");
    }
}

int somaDiagonalPrincipal (int linha,int coluna, int matriz [linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            if (i==j)
            {
                soma=soma+matriz[i][j];
            }
        }
    }

    return soma;
}

int somaDiagonalSecundaria (int linha,int coluna, int matriz[linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
       for (j=0;j<coluna;j++)
       {
           if (i+j==coluna-1)
           {
               soma=soma+matriz[i][j];
           }
       }
    }

    return soma;
}

int somaTodosElementos (int linha, int coluna, int matriz[linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            soma=soma+matriz[i][j];
        }
    }

    return soma;
}
