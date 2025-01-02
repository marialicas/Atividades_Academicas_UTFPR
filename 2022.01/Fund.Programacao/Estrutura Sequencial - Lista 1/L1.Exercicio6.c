/*Leia dois valores A e B e efetue a troca do conteúdo das duas variáveis lidas, de forma que a variável A
passe a ter o valor de B e a variável B o valor de A. Mostre o conteúdo das variáveis antes e depois da troca*/

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
