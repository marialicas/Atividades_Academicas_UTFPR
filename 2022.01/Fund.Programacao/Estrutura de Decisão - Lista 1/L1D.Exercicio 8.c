/*8) Ler tr�s valores inteiros que representam os lados de um tri�ngulo e determinar se esses valores podem
formar um tri�ngulo (obs.: para ser um tri�ngulo cada lado deve ser menor que a soma dos outros dois lados).
Se for um tri�ngulo, determinar o seu tipo: equil�tero (todos os lados iguais), is�sceles (dois lados iguais) e
escaleno (todos os lados diferentes).*/

#include<stdio.h>

int main()
{
    int num, num2, num3,soma,soma2,soma3;

    printf("informe o primeiro valor inteiro: ");
    scanf ("%d",&num);

    printf("informe o segundo valor inteiro: ");
    scanf("%d",&num2);

    printf("informe o terceiro valor inteiro: ");
    scanf("%d",&num3);

    soma=num+num2;
    soma2=num+num3;
    soma3=num2+num3;

    if (num>0 && num!=0 && num2>0 && num2!=0 && num3>0 && num3!=0)
    {
        if (num3<soma || num2<soma2 || num<soma3)
        {
            printf("eh um triangulo");

            if (num==num2 && num==num3 && num2==num3)
            {
                printf (" equilatero\n");
            }
            else if (num==num2 && num3!=num && num3!=num2 || num==num3 && num2!=num && num2!=num3 || num2==num3 && num!=num2 && num!=num3)
            {
                printf(" isosceles\n");
            }
            else
            {
                printf (" escaleno\n");
            }
        }
    }
    else
    {
        printf ("nao eh um triangulo.\n");
    }

    return 0;
}
