/*Leia um valor double que representa o troco a ser fornecido por um caixa. Separe a parte inteira (reais) da
parte decimal (centavos) e apresente na forma: 123 reais e 18 centavos. Use a fun��o round, da biblioteca
math.h, para o arredondamento da parte decimal).*/

#include<stdio.h>
#include<math.h>

int main ()
{
    double num, parteDec;
    int parteInt,centavos;


    printf("informe o valor do troco:");
    scanf ("%lf", &num);

    parteInt = (int)num;
    parteDec = num - parteInt;
    centavos=parteDec*100;

    printf("o valor informado eh ");
    printf("%d reais e ", parteInt);
    printf("%d centavos",centavos);

    return 0;
}
 //n�o consegui usar a formula round.
