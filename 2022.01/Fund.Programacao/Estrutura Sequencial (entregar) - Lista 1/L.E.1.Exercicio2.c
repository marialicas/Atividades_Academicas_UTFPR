/* Elabore um programa que leia via teclado uma quantidade de segundos (tipo int) e transforme este tempo
em dias, horas e minutos (as três últimas variáveis em tipo float).*/

#include<stdio.h>

int main ()
{
    int segundos;
    float minutos, horas, dias;

    printf("Informe o tempo em segundos: ");
    scanf ("%d", &segundos);

    minutos=segundos/60;
    horas=minutos/60;
    dias=horas/24;

    printf("o tempo em dias eh: %.1f\n", dias);
    printf("o tempo em horas eh: %.1f\n", horas);
    printf("o tempo em minutos eh: %.1f\n",minutos);

    return 0;
}
