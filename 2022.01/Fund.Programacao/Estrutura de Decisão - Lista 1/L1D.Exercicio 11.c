/*11)N�meros pal�ndromos s�o aqueles que escritos da direita para a esquerda ou da esquerda para a direita
tem o mesmo valor. Ex.: 9229, 4554, 9779. Fazer um programa que dado um n�mero de 4 d�gitos, calcular e
escrever se este n�mero � ou n�o pal�ndromo*/

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
