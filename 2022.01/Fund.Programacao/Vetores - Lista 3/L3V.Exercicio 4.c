#include<stdio.h>
#include"vetores.h"
int main ()
{
    int i,j,k;
    char opcao;
    do
    {
        int vetA[10];
        printf("\n=== VETOR A===\n");
        gerarVetorSemRepeticao (vetA,10,15);
        mostrarVetInt(vetA,10);

        int vetB[10];
        printf("\n=== VETOR B===\n");
        gerarVetorSemRepeticao (vetB,10,10);
        mostrarVetInt(vetB,10);

        int vet [10];
        printf("\n=== INTERSECAO ===\n");
        for (i=0;i<10;i++)
        {
            for (j=0;j<10;j++)
            {
                if (vetA[i]==vetB[j])
                {
                    vet[k]=vetA[i];
                    printf("%d\t",vet[k]);
                }
            }
        }

        printf("\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
