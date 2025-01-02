/* Fazer um programa que leia um número inteiro de até três dígitos (considere que será fornecido um
número de até 3 dígitos), calcule e imprima a soma dos seus dígitos.*/

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
