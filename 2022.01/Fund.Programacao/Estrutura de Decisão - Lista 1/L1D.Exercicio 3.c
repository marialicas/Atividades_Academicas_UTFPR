/*3) Escreva um programa que leia um número e verifique se ele se encontra no intervalo entre 5 e 20 ou fora
do fora do intervalo entre 5 e 20.*/
#include<stdio.h>

int main ()
{
    float num;

    printf("informe um numero entre 5 e 20: ");
    scanf("%f", &num);

    if ((num>=5) && (num<=20))
    {
        printf("%.1f esta no intervalo entre 5 e 20\n", num);
    }

    else
    {
        printf ("%.1f esta fora do intervalo entre 5 e 20\n", num);
    }

    return 0;
}
