/*2)Escreva um programa que leia um número e verifique se ele é maior, menor ou igual a 10.*/

#include<stdio.h>

int main ()
{
    float num;

    printf ("informe um numero:");
    scanf ("%f", &num);

    if (num<10)
    {
        printf ("o valor eh menor que 10\n");
    }

    else if (num==10)
    {
        printf ("o valor eh igual a 10\n");
    }

    else
    {
        printf("o valor maior eh que 10\n");
    }

    return 0;
}
