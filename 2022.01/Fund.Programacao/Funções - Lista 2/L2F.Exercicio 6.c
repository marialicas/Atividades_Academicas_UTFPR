/*6) (DESAFIO) Desenvolver uma fun��o que receba um n�mero inteiro positivo e �mpar e imprima um
diamante de asteriscos. Escrever um programa para validar a entrada e chamar a fun��o.
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
