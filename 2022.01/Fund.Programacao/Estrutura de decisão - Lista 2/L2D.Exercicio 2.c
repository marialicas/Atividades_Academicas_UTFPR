/*2)Uma �rvore de decis�o obt�m a decis�o pela execu��o de uma sequ�ncia de testes. Cada n� interno da �rvore
corresponde a um teste do valor de uma das propriedades e os ramos deste n� s�o identificados com os poss�veis
valores do teste. Cada n� folha da �rvore especifica o valor de retorno se a folha for atingida. A figura a seguir
apresenta um exemplo fict�cio de �rvore de decis�o, tomando atributos de clientes de uma institui��o financeira.
Elabore um programa que implemente essa �rvore de decis�o. As entradas podem ser do tipo char, portanto, considere
a primeira letra de cada palavra como entrada. Caso o usu�rio informe um caractere diferente dos aceit�veis, apresente
a mensagem "Caractere inv�lido".*/

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
