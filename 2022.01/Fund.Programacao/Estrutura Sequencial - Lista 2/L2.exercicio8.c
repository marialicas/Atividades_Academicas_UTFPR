//*) Ler um n�mero inteiro com at� 5 d�gitos. Separar os d�gitos desse n�mero e mostr�-los em linhas distintas.
//Tamb�m calcular e mostrar a soma dos d�gitos//

#include<stdio.h>

int main()
{
    int num,soma;
    float dezenaMilhar,unidadeMilhar,centena,dezena,unidade;

    printf("digite um numero inteiro com ate 5 digitos:");
    scanf ("%d",&num);

    dezenaMilhar=num/10000;
    unidadeMilhar=num%10000/1000;
    centena=num%1000/100;
    dezena=num%100/10;
    unidade=num%10;
    soma=dezenaMilhar+unidadeMilhar+centena+dezena+unidade;


    printf("o primeiro numero eh:%.f\n",dezenaMilhar);
    printf("o segundo numero eh:%.f\n",unidadeMilhar);
    printf("o terceiro numero eh:%.f\n",centena);
    printf("o quarto numero eh:%.f\n",dezena);
    printf("o quinto numero eh:%.f\n",unidade);
    printf("a soma dos digitos eh:%d\n",soma);


}
