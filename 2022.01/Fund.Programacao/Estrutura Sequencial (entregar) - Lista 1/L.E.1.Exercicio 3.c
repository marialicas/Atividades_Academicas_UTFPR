/* Faça um programa que receba o peso e a altura de uma pessoa e calcule o índice de massa corpórea.
Esse índice mede a relação entre peso e altura (peso em quilogramas dividido pelo quadrado da altura em
metros). */

#include <stdio.h>

int main ()
{
    float peso, altura, IMC;

    printf("informe o peso: ");
    scanf("%f", &peso);

    printf("informe a altura: ");
    scanf("%f", &altura);

    IMC=peso/(altura*altura);

    printf(" o IMC eh: %.1f\n",IMC);

    return 0;
}
