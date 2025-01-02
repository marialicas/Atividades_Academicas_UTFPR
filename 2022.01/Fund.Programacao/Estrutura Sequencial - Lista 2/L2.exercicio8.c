//*) Ler um número inteiro com até 5 dígitos. Separar os dígitos desse número e mostrá-los em linhas distintas.
//Também calcular e mostrar a soma dos dígitos//

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
