//imprime um numero de 0 a 10
// não tem o numero conhecido de repetição, mas o teste eh no final

#include<stdio.h>

int main ()
{
    /*int i=0;

    do
    {
       printf("%d\t",i);
       i++;
    }while (i<=10);*/

    //validaar um numero

    int num;
    do
    {
        printf("informe um numero maior do que 0: ");
        scanf("%d",&num);
    }while (num<=0);



    return 0;
}
