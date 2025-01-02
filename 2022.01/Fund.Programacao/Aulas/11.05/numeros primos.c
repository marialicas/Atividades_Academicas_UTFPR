//numeros primos

#include<stdio.h>

int main ()
{
    int i, cont=0,num;

    printf("informe um numero: ");
    scanf("%d", &num);

    /*for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            cont++; // conta a quatidade de divisores do num
        }
    }

    if (cont==2) // para ser primo ter q ter apenas 2 divisores
    {
        printf("eh um numero primo.\n");
    }
    else
    {
        printf("nao eh um numero primo.\n");
    }*/

    //// OU ////

    for (i=2;i<num;i++) // tirou os q seria divisel do intervelo, o 1 e o proprio num.
    {
        if (num%i==0)
        {
            cont++; // conta a quatidade de divisores do num
            break; // sair do for quando achar um divisor
        }
    }

    if (cont==0 && num>1)// zero pq tirou os numeros que seria divisivel do intervalo, e maior que 1 pq um nao eh primo
    {
        printf("eh um numero primo.\n");
    }
    else
    {
        printf("nao eh um numero primo.\n");
    }
}
