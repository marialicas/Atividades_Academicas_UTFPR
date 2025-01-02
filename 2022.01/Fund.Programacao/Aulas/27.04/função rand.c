//o rand precisa de uma valor semente (srand)//
#include<stdio.h>
#include<stdlib.h> // usar a função rand () RAND_MAX//
#include<time.h> // inicializa o randd - usa NULL para quando querer o parametro hora e data do dia atual.

int main ()
{
    int x,i;

    srand(time(NULL)); // inicializa o rand com um valor semente
    printf ("intervalo entre 0 e 10\n"); // rand_max, maximo de um numero inteiro (32...)

    for (i=1; i<=10; i++)
    {
        x= rand()%11; // entre 0 e 10
        printf ("%d\n",x);
    }

    return 0;
}
