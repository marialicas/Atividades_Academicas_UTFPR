/* Fazer um programa que leia um n�mero inteiro de at� tr�s d�gitos (considere que ser� fornecido um
n�mero de at� 3 d�gitos), calcule e imprima a soma dos seus d�gitos.*/

#include<stdio.h>

int main()
{
    int num,num1, num2, num3,soma;

    printf ("informe um numero inteiro com ate tres digitos:");
    scanf ("%d",&num);

    num1= num/100;
    num2=num%100/10;
    num3=num%10;
    soma= num1+num2+num3;

    printf ("a somo dos tres digitos eh igual a:%d\n", soma);

}
