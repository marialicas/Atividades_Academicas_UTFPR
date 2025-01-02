/*4) Gerar uma matriz 10x2 com valores de 1 a 6. A primeira coluna da matriz se refere a base e a segunda
coluna ao expoente. Criar uma função que calcule a potência, gerar um vetor que armazena o resultado da
potência obtida a partir dos valores da matriz.*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"potencia.h"

int main ()
{
    int i,j,matriz[10][2],limite=6,base[10],expoente[10],resultado[10];
    char opcao;

    do
    {
        srand(time(NULL));
        printf("=== MATRIZ ===\n");
        for (i=0;i<10;i++)
        {
            for (j=0;j<2;j++)
            {
                matriz [i][j]= rand() % limite+1;
                printf(" %d ",matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n==== CALCULO DA POTENCIA ====\n");
        printf("BASE\t EXPOENTE\t RESULTADO\n");
        for (i=0;i<10;i++)
        {
            for (j=0;j<2;j++)
            {
                base[i]=matriz[i][0];
                expoente[i]=matriz[i][1];
                resultado[i]=potencia(base[i],expoente[i]);
            }
            printf("%d\t %d\t\t%d\n",base[i],expoente[i],resultado[i]);
        }

        printf("\nDeseja repetir o progrna (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao=='s'|| opcao=='S');
}
