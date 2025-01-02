/*10) Faça um programa que apresente uma tabela de lucro esperado, em decorrência do número de pessoas
e valor do ingresso. O valor do ingresso vai de R$ 15,00 até R$ 20,00 aumentando de R$ 0,50 centavos. É
informada a quantidade de pessoas.*/

#include<stdio.h>

int main ()
{
    int num;
    float i,valor;

    printf("informe a quantidade de pessoas: ");
    scanf("%d",&num);

    if (num>0)
    {
        printf("\nVALOR DO INGRESSO\tVALOR TOTAL RECEBIDO\n");
        for (i=15.00;i<=20.00;i=(i+0.50))
        {
            valor=num*i;
            printf("R%c %.2f",36,i);
            printf("\t\tR%c %.2f\n",36,valor);
        }
    }
    else
    {
        printf("numero invalido.\n");
    }

    return 0;
}
