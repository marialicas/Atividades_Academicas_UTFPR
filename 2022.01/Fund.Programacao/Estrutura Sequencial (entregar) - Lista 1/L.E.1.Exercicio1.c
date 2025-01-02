/*Faça um programa que receba o custo de um espetáculo teatral e o preço do convite desse espetáculo.
Esse programa deve calcular e mostrar: a) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo.
b) A quantidade de convites que devem ser vendidos para cobrir o custo do espetáculo e ainda obter um lucro
de 25%. Obs.: A função ceil() da biblioteca math.h arredonda o número para cima.*/

#include<stdio.h>

int main ()
{
    float custoEsp, valorConv,cobrirCusto,lucro;
    int a, lucroArredondado, b;

    printf ("informe o valor de custo do espetaculo:");
    scanf ("%f", &custoEsp);

    printf ("informe o valor do convite: ");
    scanf ("%f", &valorConv);

    cobrirCusto=custoEsp/valorConv;
    a= ceil(cobrirCusto);
    lucro=(25*custoEsp/100)/valorConv;
    lucroArredondado = ceil (lucro);
    b=a+lucroArredondado;

    printf (" Para cobrir os custos do espetaculo eh necessario vender %d ingressos.\n", a);
    printf (" Para cobrir o custo do espetaculo e ter lucro de 25%c eh necessario vender %d ingressos.\n",37,b);

    return 0;
}
