/*3) Gerar uma matriz 10x10 preenchida com o número 1 e mostrar a matriz. Em seguida, preencher com 0 as
diagonais principal e secundária e mostrar a matriz.
*/

#include<stdio.h>

int main ()
{
    int i,j,matriz [10][10];
    char opcao;

   do
   {
        printf("=========== MATRIZ ORIGINAL ===========\n");
        for (i=0;i<10;i++)
        {
            for (j=0;j<10;j++)
            {
                matriz [i][j]=1;
                printf(" %d  ",matriz[i][j]);
            }
            printf("\n");
        }

        printf("\n============ MATRIZ ATUAL =============\n");
        for (i=0;i<10;i++)
        {
            for (j=0;j<10;j++)
            {
                if (i==j)
                {
                    matriz[i][j]=0;
                    printf(" %d  ",matriz[i][j]);
                }
                else if (i+j==10-1)
                {
                    matriz[i][j]=0;
                    printf(" %d  ",matriz[i][j]);
                }
                else
                {
                   matriz[i][j]=1;
                   printf(" %d  ",matriz[i][j]);
                }
            }
            printf("\n");
        }

        printf("\nDeseja repetir o progrna (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
   }while(opcao=='s'|| opcao=='S');

    return 0;
}
