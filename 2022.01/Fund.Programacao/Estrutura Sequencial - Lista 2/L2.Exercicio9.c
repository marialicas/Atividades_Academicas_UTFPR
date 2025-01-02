/*Ler um número inteiro com até 3 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
Na sequência calcular e mostrar o inverso do número.*/

#include<stdio.h>

int main()
{
    int num,centena, dezena, unidade, a, b, c;

    printf("informe um numero inteiro com ate 3 digitos");
    scanf("%d",&num);

    centena=num/100;
    dezena=num%100/10;
    unidade=num%10;
    a=centena;
    b=dezena;
    c=unidade;

    printf("o primeiro digito eh:%d\n",centena);
    printf("o segundo digito eh:%d\n",dezena);
    printf("o terceiro digito eh:%d\n", unidade);
    printf ("o inverso do numero eh: %d%d%d",c,b,a);
}
