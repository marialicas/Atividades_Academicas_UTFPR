/* Ler um número double. Separar a parte inteira e a parte decimal desse número. Apresentar a parte decimal
como um valor double e como um inteiro de três dígitos. Da parte inteira separar o número que representa
unidade, dezena e centena e mostrar */


#include <stdio.h>

int main()
{
    double num, parteDec;
    int parteInt, parteDecInt, centena, dezena, unidade;

    printf ("informe um numero double:");
    scanf ("%lf", &num);

    parteInt = (int)num;
    parteDec = num - parteInt;
    parteDecInt = parteDec*1000;
    centena = parteInt/100;
    dezena = parteInt%100/10;
    unidade = parteInt%10;

    printf("numero informado: %lf\n", num);
    printf("parte inteira: %d\n", parteInt);
    printf("parteDec: %lf\n", parteDec);
    printf("parte decimal como inteiro de 3 digitos: %d\n", parteDecInt);
    printf("centena: %d\n", centena);
    printf("dezena: %d\n", dezena);
    printf("unidade: %d\n", unidade);
}

