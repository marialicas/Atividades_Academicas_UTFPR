/* (DESAFIO) Obter o resto da divisão de dois valores inteiros informados pelo usuário, sem usar o operador
de resto.*/

#include<stdio.h>

int main()
{
    int num1, num2,divisao,resto,contaInversa;

    printf("informe o primeiro numero:");
    scanf("%d", &num1);

    printf ("informe o segundo numero:");
    scanf ("%d", &num2);

    divisao=num1/num2;
    contaInversa=divisao*num2;
    resto=num1-contaInversa;

    printf("resto da divisao: %d",resto);


    return 0;

}
