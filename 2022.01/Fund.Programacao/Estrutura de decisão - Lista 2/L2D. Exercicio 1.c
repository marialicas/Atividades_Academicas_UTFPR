/*1) Um ano � bissexto se for divis�vel por 4 e n�o for divis�vel por 100. Tamb�m s�o bissextos os divis�veis por 400.
Escreva um programa que determina se um ano informado pelo usu�rio � bissexto.*/

#include<stdio.h>

int main ()
{
    int ano;

    printf("informe um ano: ");
    scanf("%d", &ano);

    if (ano%4==0 && ano%100!=0|| ano%400==0)
    {
        printf("o ano eh bissexto.\n");
    }
    else
    {
        printf("o ano nao eh bissexto.\n");
    }

    return 0;
}
