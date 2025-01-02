/*
Ler o raio de um círculo e calcular a circunferência
*/

#include <stdio.h>
#include <math.h>
//#define PI 3.1415926535897932


int main()
{
    int PI;
    float raio, circunferencia;


    printf("informe o raio:");
    scanf ("%f", &raio);

    PI = 3.1415926535897932;

    circunferencia = 2*PI*raio;
    printf ("circunferencia %2.f\n", circunferencia);

    return 0;

}
