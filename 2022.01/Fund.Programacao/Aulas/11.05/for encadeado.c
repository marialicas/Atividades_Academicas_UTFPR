// imprimir um numero 10 vezes, para cada interacao do i imprime 10 vezes o valor de i.

#include<stdio.h>

int main ()
{
    int i,j;

    for (i=1;i<=5;i++) //contador do i que vai até 5
    {
        for (j=1;j<=10;j++) //j<=10 (quantidade de vezes que quer q o numero repita)
        {
            printf("%d", i);
        }
        printf("\n"); // quebra  alinha antes de inicializar o for dnovo
    }
}
