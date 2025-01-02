/*2) Gerar uma matriz 5x5 com números randômicos, no intervalo de 1 a 5. Em seguida criar dois vetores que
contenham, respectivamente, as somas das linhas e das colunas da matriz. Mostrar os vetores criados*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int i,j,matriz [5][5],limite=5, linhas[5],colunas[5],soma;
    char opcao;

    srand(time(NULL));

    do
    {

        printf("==== MATRIZ ====\n");
        for (i=0;i<5;i++)
        {
            for (j=0;j<5;j++)
            {
                matriz[i][j]= rand() % limite+1;
                printf(" %d ",matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n==== SOMA DAS LINHAS ====\n");
        for (i=0;i<5;i++)
        {
            soma=0;
            for (j=0;j<5;j++)
            {
                soma=soma+matriz[i][j];
                linhas[i]=soma;
            }
            printf("%d\t",linhas[i]);
        }

        printf("\n\n==== SOMA DAS COLUNAS ====\n");
        for (j=0;j<5;j++)
        {
            soma=0;
            for (i=0;i<5;i++)
            {
                soma=soma+matriz[i][j];
                colunas[j]=soma;
            }
            printf("%d\t",colunas[j]);
        }

        printf("\n\nDeseja repetir o programa (S/N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao=='S');
}
