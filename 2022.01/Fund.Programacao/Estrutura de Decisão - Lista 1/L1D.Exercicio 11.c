/*11)Números palíndromos são aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um número de 4 dígitos, calcular e
escrever se este número é ou não palíndromo*/

#include<stdio.h>

int main ()
{
    int num, unidade, dezena, centena, milhar;

    printf("informe um numero de 4 digitos: ");
    scanf("%d", &num);

    unidade=num%10;
    dezena=num%100/10;
    centena=num%1000/100;
    milhar=num/1000;

    if (unidade==milhar && dezena==centena)
    {
        printf(" eh um palindromo.\n");
    }
    else
    {
        printf(" nao eh um palindromo.\n");
    }

    return 0;
}
