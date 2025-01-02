#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matriz.h"

int main ()
{
    char opcao;
    int matriz[10][10],limite=20,linha=10,coluna=10,i,j,par,impar,k;

    srand(time(NULL));
    do
    {

        printf("\n===== Matriz de numeros aleatorios ====\n");
        gerarMatriz(linha,coluna,matriz,limite);
        mostrarMatriz(linha,coluna,matriz);

        par=0;
        impar=0;

        printf("\n===== Matriz alterada ====\n");
        int vetP[par],vetI[impar];
        for(i=0;i<linha;i++)
        {
            for(j=0;j<coluna;j++)
            {
                if (i!=0 && i%2==0)
                {
                    if (matriz[i][j]%2==0)
                    {
                        matriz[i][j]=2;
                        vetP[i]=matriz[i][j];
                        par++;
                    }
                }
                if (i!=0 && i%2!=0)
                {
                    if (matriz[i][j]%2!=0)
                    {
                        matriz[i][j]=1;
                        impar++;
                    }
                }
            }
        }
        mostrarMatriz(linha,coluna,matriz);

        printf("\n===== Vetor de Pares=====\n");
        for(i=0;i<linha;i++)
        {
            for(j=0;j<coluna;j++)
            {
                if (i!=0 && i%2==0)
                {
                    if (matriz[i][j]%2==0)
                    {
                        matriz[i][j]=2;
                        vetP[i]=matriz[i][j];
                    }
                }
                if (i!=0 && i%2!=0)
                {
                    if (matriz[i][j]%2!=0)
                    {
                        matriz[i][j]=1;
                    }
                }
            }
        }
        mostrarVetor(vetP,par);

        printf("\n===== Vetor de Impares=====\n");
        for(i=0;i<linha;i++)
        {
            for(j=0;j<coluna;j++)
            {
                if (i!=0 && i%2==0)
                {
                    if (matriz[i][j]%2==0)
                    {
                        matriz[i][j]=2;
                        vetP[i]=matriz[i][j];
                    }
                }
                if (i!=0 && i%2!=0)
                {
                    if (matriz[i][j]%2!=0)
                    {
                        matriz[i][j]=1;
                    }
                }
            }
        }
        mostrarVetor(vetI,impar);

        printf("\nDeseja repetir o programa? (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao== 'S');
}
