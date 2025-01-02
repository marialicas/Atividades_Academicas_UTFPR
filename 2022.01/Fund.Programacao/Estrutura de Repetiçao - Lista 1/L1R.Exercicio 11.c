/*11) Faça um programa que mostre o resultado da seguinte soma, sendo n o valor informado pelo usuário:
Soma = 1 + 1/2 + 1/3 + 1/4 + 1/5 + … + 1/n*/

#include<stdio.h>

int main ()
{
    int num,i;
    float divisao=0,soma=0;

    printf("informe um numero: ");
    scanf("%d",&num);

    for (i=1; i<=num-1;i++)
    {
        printf("1/%d + ",i);
    }
    printf ("1/%d %c ", num, 61);

    for (i=1;i<=num;i++)
    {
        divisao=divisao+(1/(float)i);
    }
    printf("%.2f\n",divisao);

    return 0;
}
