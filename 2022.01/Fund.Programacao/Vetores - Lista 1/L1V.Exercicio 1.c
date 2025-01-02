/*1) Criar um arquivo de cabe�alho chamado vetores.h com:
- Fun��o para gerar valores aleat�rios inteiros que variem entre 0 e limite em um vetor;
- Fun��o para mostrar um vetor de n�meros inteiros.
Utilizar essas fun��es para:
a) Gerar n�meros inteiros em um vetor em que a quantidade de elementos e o valor do limite sejam
informados pelo usu�rio. Validar as entradas para que sejam informados valores inteiros positivos.
b) Mostrar o vetor de n�meros inteiros.
c) Encontrar e mostrar o menor elemento armazenado no vetor.
d) Fazer a m�dia dos n�meros pares que est�o armazenados no vetor. Validar para que n�o seja realizada
divis�o por zero no c�lculo da m�dia.
O programa permanecer� em execu��o at� que seja escolhida a op��o sair.*/

#include<stdio.h>
#include"vetores.h"

int main ()
{
    int tam,limite,soma,cont,i,num,j,indice;
    float media;
    char opcao;

    do
    {
        soma=0;
        cont=0;
        do
        {
            printf("Informe o tamanho do vetor: ");
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

        gerarIntDe0aLimite(vet, tam, limite);
        printf("\n=== VETOR GERADO ===\n");
        mostrarVetInt(vet, tam);

        for (i=0;i<tam;i++)
        {
            if (vet[i]%2==0)
                {
                    soma=soma+vet[i];
                    cont++;
                }
        }
        menorNumero(vet,tam);

        printf("\nMedia dos pares: %.2f\n",(float)soma/cont);

        printf("\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
