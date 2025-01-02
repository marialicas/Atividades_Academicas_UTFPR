/*Tendo como entrada dois valores inteiros, elaborar um algoritmo para calcular e mostrar:
a) A soma desses valores; b) A subtração do primeiro pelo segundo; c) A multiplicação entre eles;
d) A divisão inteira do primeiro pelo segundo;e) A divisão float do primeiro pelo segundo;
f) O resto da divisão do primeiro pelo segundo.*/

#include<stdio.h>

int main ()
{
    int num, num2,soma,subtracao,multiplicacao,divisao,resto;
    float divisaoFloat;

    printf ("informe o primeiro valor:");
    scanf ("%d",&num);

    printf ("informe o segundo valor:");
    scanf ("%d",&num2);

    soma=num+num2;
    subtracao=num-num2;
    multiplicacao=num*num2;
    divisao=num/num2;
    divisaoFloat= (float)num/num2;
    resto=num%num2;

    printf ("a soma dos valores eh:%d\n", soma);
    printf ("a subtracao do primeiro pelo segundo eh:%d\n", subtracao);
    printf ("a multiplicacao entre eles eh:%d\n", multiplicacao);
    printf ("a divisao inteita do primeiro pelo segundo eh:%d\n", divisao);
    printf ("a divisao float do primeiro pelo segundo eh:%.2f\n", divisaoFloat);
    printf ("o resto da divisao do primeiro pelo segundo eh:%d\n", resto);





}
