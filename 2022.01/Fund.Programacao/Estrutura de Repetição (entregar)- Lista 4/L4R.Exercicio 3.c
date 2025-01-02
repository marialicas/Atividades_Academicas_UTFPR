/*3) Faça um programa que solicite valores positivos para o limite inferior e superior de um intervalo e mostre os
números primos do intervalo em ordem crescente e faça a soma dos dígitos de cada número primo.*/

#include<stdio.h>

int main ()
{
    int limiteI,limiteS,i,j,contDivisor,centena,unidade,soma, dezena;
    char opcao;

    do
    {
        printf("Digite um valor positivo para o limite inferior do intervalo:");
        scanf("%d", &limiteI);
        printf("Digite um valor positivo para o limite superior do intervalo:");
        scanf("%d", &limiteS);


        for (i=limiteI;i<=limiteS;i++)
        {
            contDivisor=0;
            for (j=2; j<i;j++)
            {
                if (i%j==0)
                {
                    contDivisor++;
                    break;
                }
            }
            if (contDivisor==0)
                {
                    centena=i/100;
                    dezena=i%100/10;
                    unidade=i%10;
                    soma=centena+dezena+unidade;
                    printf("\nPrimo %d =>",i);
                    printf ("Soma dos digitos => %d",soma);
                }
        }

        printf("\n\nDeseja continuar no programa(S/s):");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
