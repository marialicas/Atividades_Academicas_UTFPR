/*3) Gerar elementos inteiros aleatórios entre 1 e 10 em um vetor A de tamanho 10 e criar um vetor B de
mesma dimensão e com os mesmos elementos de A, mas em ordem invertida, ou seja, o primeiro elemento
de A será o último de B, o segundo elemento de A será o penúltimo de B e assim sucessivamente.*/

#include<stdio.h>
#include"vetores.h"

int main ()
{
    int tam=10,limite=10,i;
    char opcao;

    do
    {

        int vet[10];
        printf("=== VETOR A ===\n");
        gerarIntDe1aLimite(vet,tam,limite);
        mostrarVetInt(vet,tam);

        printf("\n\n=== VETOR B ===\n");
        printf("Vetor = ");
        for (i=9;i>=0;i--)
        {
            printf("%d\t", vet[i]);
        }

        printf("\n\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
