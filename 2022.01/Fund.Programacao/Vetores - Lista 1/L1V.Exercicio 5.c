/*5) Gerar aleatoriamente valores 0 ou 1 um vetor com 100 elementos. Mostrar o vetor. Em seguida contar quantos
0s sucessivos o vetor cont�m, armazenar essa quantidade em outro vetor e mostr�-lo. Qual seria o tamanho
m�nimo e m�ximo do vetor que armazena as quantidades? Cri�-lo para o tamanho m�ximo poss�vel.*/

#include<stdio.h>
#include"vetores.h"
int main ()
{
    int i,j,k,cont=0;
    char opcao;
    do
    {
        int vetA[100];
        printf("\n=== VETOR A===\n");
        gerarIntDe0aLimite (vetA,100,1);
        mostrarVetInt(vetA,100);

        int vetB[100];
        printf("\n=== VETOR B===\n");
        for (i=0;i<100;i++)
        {
            if (vetA[i]==0)
            {
                cont++;
                vetB[i]=cont;
            }
            printf("%d\t",vetB[i]);
        }

        printf("\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
