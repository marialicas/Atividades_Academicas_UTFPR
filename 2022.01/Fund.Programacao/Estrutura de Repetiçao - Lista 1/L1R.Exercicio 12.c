/* Mostre os valores ímpares e não divisíveis por 5 entre 200 e 1. Apresente os valores em ordem
decrescente. Faça a média dos valores desse intervalo que são divisíveis por 3 e por 5.*/

#include<stdio.h>

int main ()
{
    int i,cont=0,soma=-1;
    float media;

    printf("NUMEROS IMPARES E NAO DIVISIVEIS POR 5\n");
    for (i=200; i>=1;i--)
    {
        if (i%2!=0 && i%5!=0)
        {
            printf("%d\t",i);
        }
    }
    for (i=200;i>=1;i--)
    {
        if (i%3==0 && i%5==0)
        {
            soma=soma+i;
            soma++;
        }
        if (i%3==0 && i%5==0)
        {
            cont++;
        }
    }
    media=soma/cont;

    printf("\nA media dos numeros divisiveis por 3 e por 5 eh: %.1f\n",media);


    return 0;
}
