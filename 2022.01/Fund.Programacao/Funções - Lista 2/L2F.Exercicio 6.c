/*6) (DESAFIO) Desenvolver uma função que receba um número inteiro positivo e ímpar e imprima um
diamante de asteriscos. Escrever um programa para validar a entrada e chamar a função.
*/

#include<stdio.h>
#include"diamante.h"

int main ()
{
    int altura;
    char opcao;

    do
    {
        printf("\nInsira um numero impar: ");
        fflush(stdin);
        scanf("%d",&altura);

        if (altura%2!=0)
        {
            diamante(altura);
        }
        else
        {
            printf("Numero invalido.\n");
        }

        printf("\nDeseja continuar no programa (S ou N): ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
