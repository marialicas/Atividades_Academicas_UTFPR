/*1) Escreva um algoritmo que gere a série de Fibonacci até o termo n que é informado pelo usuário. A série de
Fibonacci é formada pela sequência: 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, ... , etc.*/

#include<stdio.h>

int main ()
{
    int quantidade,contFibo,contSoma,j,i,num;

    printf("Quantos termos quer mostrar: ");
    scanf("%d", &quantidade);

    i=0;
    j=1;
    contFibo=0;
    do
    {
        soma=i+j;

    }while (contFibo<quantidade);

    return 0;
}
