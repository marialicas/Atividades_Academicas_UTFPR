/*2) Faça um programa que imprima os n (indicado pelo usuário) primeiros números pares (começa em 0).
Apresente 5 valores por linha.*/

#include<stdio.h>

int main ()
{
    int quantidade, contPares, i;


    printf("Quantos numeros pares quer mostrar: ");
    scanf("%d", &quantidade);

    i=0;
    contPares=0;
    do
    {
            if (i%2==0)
            {
                printf ("%d\t",i);
                contPares++;
            }
            if (contPares%5==0)
            {
                printf("\n");
            }
            i++;
    }while (contPares<quantidade);

    return 0;
}
