/*6) Faça um programa que determine a data cronologicamente maior entre duas datas fornecidas pelo usuário. Cada
data deve ser composta por três valores inteiros, em que o primeiro representa o dia, o segundo, o mês e o terceiro, o
ano.*/

#include<stdio.h>

int main ()
{
    int dia, mes, ano, dia2, mes2, ano2;

    printf("Informe a primeira data:\n");
    printf("Escreva o dia (dd): ");
    scanf("%d", &dia);

    printf("Escreva o mes (mm): ");
    fflush(stdin);
    scanf("%d", &mes);

    printf("Escreva o ano (aaaa): ");
    fflush(stdin);
    scanf("%d", &ano);

    printf("\nInforme a segunda data:\n");
    printf("Escreva o dia (dd): ");
    scanf("%d", &dia2);

    printf("Escreva o mes (mm): ");
    fflush(stdin);
    scanf("%d", &mes2);

    printf("Escreva o ano (aaaa): ");
    fflush(stdin);
    scanf("%d", &ano2);

    if (ano>ano2 && ano!=ano2)
    {
        printf("\na maior data eh: %d/%d/%d\n",dia,mes,ano);
    }
    if (ano2>ano && ano2!=ano)
    {
        printf("\na maior data eh: %d/%d/%d\n",dia2,mes2,ano2);
    }
    if (ano==ano2)
    {
        if (mes>mes2 && mes!=mes2)
        {
           printf("\na maior data eh: %d/%d/%d\n",dia,mes,ano);
        }
        if (mes2>mes && mes2!=mes)
        {
           printf("\na maior data eh: %d/%d/%d\n",dia2,mes2,ano2);
        }

        if (mes==mes2)
        {
            if (dia>dia2 && dia!=dia2)
            {
                printf("\na maior data eh: %d/%d/%d\n",dia,mes,ano);
            }
            if (dia2>dia && dia2!=dia)
            {
                printf("\na maior data eh: %d/%d/%d\n",dia2,mes2,ano2);
            }
            if (dia==dia2)
            {
                printf("\nas datas sao iguais.\n");
            }
        }
    }

    return 0;
}
