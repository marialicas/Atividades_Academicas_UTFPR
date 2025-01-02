/*Escreva um algoritmo que leia o valor de uma prestação e da taxa de juros cobrada pelo atraso da
prestação.*/

#include<stdio.h>

int main ()
{
    float num, valorJuros;
    int taxa;

    printf ("informe o valor da prestacao:");
    scanf ("%f",&num);

    printf ("informe a porcentagem da taxa do juros (apenas o numero):");
    scanf ("%d",&taxa);

    valorJuros= num + (num*taxa/100);

    printf ("o valor com juros eh: %.2f\n", valorJuros);
}

