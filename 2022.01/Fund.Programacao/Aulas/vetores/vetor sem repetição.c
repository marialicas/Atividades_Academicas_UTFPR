#include<stdio.h>
#include"vetores.h"
int main ()
{
    int tam, limite;
    char opcao;
    do
    {
        do
        {
            printf("\nInforme o tamanho do vetor: ");
            scanf("%d",&tam);

            if (tam<0)
            {
                printf("numero invalido\n");
            }
        }while (tam<0);

        do
        {
            printf("Informe o valor do limite: ");
            scanf("%d",&limite);

            if (limite<0)
            {
                printf("Numero invalido\n");
            }
        }while (limite<0);

        int vet [tam];
        printf("\n Vetor de 0 a limite\n");
        gerarIntDe0aLimite(vet,tam,limite);
        mostrarVetInt (vet,tam);

        printf("\n Vetor de 1 a limite\n");
        gerarIntDe1aLimite(vet,tam,limite);
        ordenarVetor(vet,tam);
        mostrarVetInt(vet,tam);

        printf("\nVetor sem repeticao\n");
        gerarVetorSemRepeticao(vet,10,20);
        mostrarVetInt(vet,10);


        printf("\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
