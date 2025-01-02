#ifndef CONVERT_H
#define CONVERT_H
#include <stdio.h>

void decPBin(int dec)
{
    int i=0, j, div, vet[50];

    div = dec;

    do
    {
        vet[i] = div % 2;
        div = div / 2;

        i++;

    }while(div>=1);

    printf("Valor em binario: ");

    for(j=i-1;j>=0;j--)
    {
        printf("%d\t", vet[j]);
    }
}

void binPDec(char bin[])
{
    int i, j, k, dec=0, vetA[50], vetB[50];

    for(i=0;bin[i]!='\0';i++)
    {
        vetA[i] = (int)bin[i] - 48;
    }

    for(j=0;j<=i;j++)
    {
        vetB[j] = vetA[i-j];
    }

    for(k=i;k>=0-1;k--)
    {
        if(vetB[k]==1)
        {
            dec = dec + pow(2, k);
        }
    }

    printf("\nValor em decimal: %d", dec/2);
}

#endif // CONVERT_H
