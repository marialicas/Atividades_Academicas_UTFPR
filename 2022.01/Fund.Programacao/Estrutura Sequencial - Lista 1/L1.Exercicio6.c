/*Leia dois valores A e B e efetue a troca do conte�do das duas vari�veis lidas, de forma que a vari�vel A
passe a ter o valor de B e a vari�vel B o valor de A. Mostre o conte�do das vari�veis antes e depois da troca*/

#include<stdio.h>

int main ()
{
    int a,b,c;

    printf ("informe o valor de A:");
    scanf("%d",&a);

    printf ("informe o valor de B:");
    scanf ("%d", &b);

    a=7;
    b=9;
    c=7;

    printf("antes da troca:a=%d e b=%d\n", a,b);
    printf("depois da troca:a=%d e b=%d", b,c);
}
