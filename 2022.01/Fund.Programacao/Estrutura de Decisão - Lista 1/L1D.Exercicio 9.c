/* 9) Ler um n�mero e utilizando uma estrutura if else if else if... (obrigatoriamente encadeada) informar se ele:
a) � divis�vel por 5, por 3 ou por 2;
b) � divis�vel somente por 5 e por 3; por 5 e por 2; ou por 3 e por 2;
c) � divis�vel somente por 5, por 3 ou por 2;
d) N�o � divis�vel por nenhum destes;*/

#include<stdio.h>

int main ()
{
    int num;

    printf("informe um numero: ");
    scanf("%d", &num);

    if (num%5==0 || num%3==0 || num%2==0)
    {
        if (num%5==0 && num%3!=0 && num%2!=0)
        {
            printf("%d eh divisivel somente por 5\n", num);
        }
        if (num%3==0 && num%5!=0 && num%2!=0)
        {
            printf("%d eh divisivel somente por 3\n", num);
        }
        if (num%2==0 && num%3!=0 && num%5!=0)
        {
            printf("%d eh divisivel somente por 2\n", num);
        }

        if (num%5==0 && num%3==0 || num%5==0 && num%2==0 || num%3==0 && num%2==0)
        {
            if (num%5==0 && num%3==0 && num%2!=0)
            {
               printf ("%d eh divisivel somente por 5 e por 3\n", num);
            }
            if (num%5==0 && num%2==0 && num%3!=0)
            {
                printf("%d eh divisivel somente por 5 e por 2\n", num);
            }
            if (num%2==0 && num%3==0 && num%5!=0)
            {
                printf("%d eh divisivel somente por 3 e por 2\n", num);
            }
        }

        if (num%5==0 && num%3==0 && num%2==0)
        {
           printf("%d eh divisivel por 5, por 3 e por 2\n", num);
        }
    }
    else
    {
        printf ("%d nao eh divisivel por 5, por 3 e por 2", num);
    }

    return 0;
}
