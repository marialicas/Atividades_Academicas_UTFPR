/*Fazer um programa que leia um valor double que representa o salário de uma pessoa. Apresente
separadamente os reais (parte inteira) e os centavos (parte decimal).*/

#include<stdio.h>

int main ()
{
    double num, parteDecimal;
    int parteInt,centavos;

    printf ("informe o valor do salario:");
    scanf("%lf",&num);

    parteInt = (int)num;
    parteDecimal=num-parteInt;
    centavos=parteDecimal*100; // nao sei porque esta arredondando para 28, sendo que 0.290000*100 = 29

    printf ("reais: %d\n", parteInt);
    printf("centavos:%d\n", centavos);

    return 0;
}
