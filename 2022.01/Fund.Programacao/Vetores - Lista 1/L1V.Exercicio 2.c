/*2) Gerar elementos inteiros e aleatórios entre 1 e 25 em um vetor de tamanho 15. Gerar outros dois vetores,
um contendo os valores pares e outro os ímpares e mostrar os três vetores.*/

#include<stdio.h>
#include"vetores.h"

int main ()
{
    int tam=15,limite=25,i;
    char opcao;

    do
    {

        int vet[15];
        printf("=== VETOR ===\n");
        gerarIntDe1aLimite(vet,tam,limite);
        mostrarVetInt(vet,tam);

        printf("\n=== VETOR PARES ===\n");
        for (i=0;i<15;i++)
        {
            if (vet[i]%2==0)
            {
                printf("%d\t",vet[i]);
            }
        }
        printf("\n\n=== VETOR IMPARES ===\n");
        for (i=0;i<15;i++)
        {
            if (vet[i]%2!=0)
            {
                printf("%d\t",vet[i]);
            }
        }

        printf("\n\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
