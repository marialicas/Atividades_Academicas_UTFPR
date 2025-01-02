/*3) Crie um programa que leia uma data no formato ddmmaaaa e imprima se a data é válida ou não.*/

#include<stdio.h>

int main ()
{
    double data;
    int dia, mes, ano, diaeMes,diaeMesInt,dezenaM,unidadeM;

    printf("informe uma data (tudo junto - ddmmaaaa): ");
    scanf("%lf", &data);

    dia=data/1000000;
    diaeMes=data/10000;
    diaeMesInt=(int)diaeMes;
    dezenaM=diaeMesInt%100/10;
    unidadeM=diaeMesInt%10;
    mes=dezenaM+unidadeM;

    if (dia>0 && dia<=31 && mes>0 && mes<=13)
    {
        printf("data valida.\n");
    }
    else
    {
        printf("data invalida.\n");
    }

    return 0;
}
