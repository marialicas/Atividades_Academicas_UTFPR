/*2)Uma árvore de decisão obtém a decisão pela execução de uma sequência de testes. Cada nó interno da árvore
corresponde a um teste do valor de uma das propriedades e os ramos deste nó são identificados com os possíveis
valores do teste. Cada nó folha da árvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fictício de árvore de decisão, tomando atributos de clientes de uma instituição financeira.
Elabore um programa que implemente essa árvore de decisão. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usuário informe um caractere diferente dos aceitáveis, apresente
a mensagem "Caractere inválido".*/

#include<stdio.h>

int main ()
{
    char saldo, P, p, N,n,aplicacao,S,s,F,f;

    printf("informe se o saldo em conta corrente esta positivo (p) ou negativo (n):");
    scanf("%c", &saldo);

    switch (saldo)
    {
        case 'P':
        case 'p':
            printf("Cliente sem risco.\n");
            break;

        case 'N':
        case 'n':
            printf ("aplicacoes, sim (s) ou nao (f):");
            fflush(stdin);
            scanf("%c", &aplicacao);
            switch (aplicacao)
            {
                case 's':
                case 'S':
                printf("Cliente sem risco.\n");
                break;

                case 'F':
                case 'f':
                printf("Cliente com risco.\n");
                break;
            }

    }

    return 0;
}
