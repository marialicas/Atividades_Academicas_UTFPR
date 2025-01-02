/*Calcular o valor do salário líquido de uma pessoa. Sobre o salário bruto incidem descontos de imposto de
renda e de INSS.*/

#include<stdio.h>

int main ()
{
    float salarioBruto, inss, ir, salarioLiquido,salarioLiquido2;

    printf ("informe o valor do salario bruto:");
    scanf ("%f", &salarioBruto);

    printf ("informe o percentual do INSS:");
    scanf ("%f", &inss);

    printf ("informe o percentual do IR:");
    scanf ("%f", &ir);

    salarioLiquido= salarioBruto - (salarioBruto*inss/100);
    salarioLiquido2 = salarioLiquido - (salarioBruto*ir/100);

    printf ("o salario liquido eh: %.2f\n",salarioLiquido2);
}
