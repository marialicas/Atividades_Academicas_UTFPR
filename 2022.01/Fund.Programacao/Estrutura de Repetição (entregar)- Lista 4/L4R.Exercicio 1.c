/*1) O n�mero 3.025 possui a seguinte caracter�stica: 30 + 25 = 55 e 552 = 3 025. Fa�a um programa que escreva
todos os n�meros com quatro algarismos que possuem a citada caracter�stica*/

#include<stdio.h>

int main ()
{
    char opcao;
    int primeiraP,num,segundaP;

    do
    {
        num=1000;
        while (num<9999)
        {
            primeiraP=num/100;
            segundaP=num%100;

            if (num==(primeiraP+segundaP) * (primeiraP+segundaP))
            {
                printf("%d\t",num);
            }
            num=num+1;
        }

        printf("\n\nDeseja continuar no programa(S/s):");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
