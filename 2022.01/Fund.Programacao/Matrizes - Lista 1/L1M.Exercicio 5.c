/*5) Gerar uma matriz 3x3 com números randômicos no intervalo de 1 a 100 e a seguir escrever a localização
(linha e a coluna) do maior valor.
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include"matrizes.h"

int main ()
{
    int i,j,matriz [3][3],maior,menor,linha,coluna;
    char opcao;

    do
    {
        printf("== MATRIZ ==\n");
        gerarMatrizIntde1ALim(3,3,matriz,100);
        mostrarMatriz(3,3,matriz);

        for (i=0;i<3;i++)
        {
            for (j=0;j<3;j++)
            {
               if (i==0 && j==0)
               {
                   maior=matriz[0][0];
                   linha=i+1;
                   coluna=j+1;
               }
               if (matriz[i][j]>maior)
               {
                   maior=matriz[i][j];
                   linha=i+1;
                   coluna=j+1;
               }
            }
        }

        printf("\nO maior elemento da matriz eh %d e se encontra na coluna %d da linha %d.\n", maior,coluna,linha);

        printf("\nDeseje repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;
}
