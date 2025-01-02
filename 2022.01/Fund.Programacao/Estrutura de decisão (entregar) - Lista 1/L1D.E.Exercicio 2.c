/*2) Faça um programa que apresente o menu a seguir e permita ao usuário escolher a opção desejada,
receba os dados necessários para executar a operação e mostre o resultado.
Menu de opções:
1 – Mostra os números em ordem crescente
2 – Mostra os números em ordem decrescente
3 - Mostra os números que são múltiplos de 2
Observações: Ler um conjunto de 4 valores inteiros: opcao, a, b e c. A seguir:
a) Se opcao = 1 escrever os três valores a, b e c em ordem crescente.
b) Se opcao = 2 escrever os três valores a, b e c em ordem decrescente.
c) Se opcao = 3 escrever se os valores a, b e c são múltiplos de 2.*/

#include<stdio.h>

int main ()
{
    int opcao,a,b,c;

    printf("Informe 3 numeros inteiros, diferentes entre si: ");
    scanf("%d %d %d", &a, &b,&c);

    printf("Menu de opcoes:\n1- Mostra os numeros em ordem crescente.\n");
    printf("2- Mostra o numero em ordem decrescente.\n3- Mostra os numeros que sao multiplos de 2.\n");

    printf("\nDigite a opcao desejada: ");
    fflush(stdin);
    scanf("%d", &opcao);

    if (opcao==1 || opcao==2 || opcao==3)
    {
        if (opcao==1)
        {
            if (a<b && b<c)
            {
                printf("%d %d %d", a,b,c);
            }
            if (b<a && a<c)
            {
                printf("%d %d %d", b,a,c);
            }
            if (a<c && c<b)
            {
                printf("%d %d %d", a,c,b);
            }
            if (c<a && a<b)
            {
                printf("%d %d %d", c,a,b);
            }
            if (b<c && c<a)
            {
                printf("%d %d %d", b,c,a);
            }
            if (c<b && b<a)
            {
                printf("%d %d %d", c,b,a);
            }
        }

        if (opcao==2)
        {
            if (a>b && b>c)
            {
                printf("%d %d %d", a,b,c);
            }
            if (b>a && a>c)
            {
                printf("%d %d %d", b,a,c);
            }
            if (a>c && c>b)
            {
                printf("%d %d %d", a,c,b);
            }
            if (c>a && a>b)
            {
                printf("%d %d %d", c,a,b);
            }
            if (b>c && c>a)
            {
                printf("%d %d %d", b,c,a);
            }
            if (c>b && b>a)
            {
                printf("%d %d %d", c,b,a);
            }
        }

        if (opcao==3)
        {
            if (a%2==0 || b%2==0 || c%2==0)
            {
                if (a%2==0 && b%2!=0 && c%2!=0)
                {
                    printf("Apenas %d eh divisivel por 2.\n",a);
                }
                if (b%2==0 && a%2!=0 && c%2!=0)
                {
                    printf("Apenas %d eh divisivel por 2.\n",b);
                }
                if (c%2==0 && b%2!=0 && a%2!=0)
                {
                    printf("Apenas %d eh divisivel por 2.\n",c);
                }

                if (a%2==0 && b%2==0 || a%2==0 && c%2==0 || b%2==0 && c%2==0)
                {
                    if (a%2==0 && b%2==0 && c%2!=0)
                    {
                        printf ("Apenas os numeros %d e %d sao multiplos de 2.\n", a,b);
                    }
                    if (a%2==0 && c%2==0 && b%2!=0)
                    {
                        printf ("Apenas os numeros %d e %d sao multiplos de 2.\n", a,c);
                    }
                    if (b%2==0 && c%2==0 && a%2!=0)
                    {
                        printf ("Apenas os numeros %d e %d sao multiplos de 2.\n", b,c);
                    }
                }

                if (a%2==0 && b%2==0 && c%2==0)
                {
                    printf("Os numeros %d, %d e %d sao multiplos de 2.\n", a, b,c);
                }
            }
            else
            {
                printf ("Nenhum dos numeros eh multiplo de 2.\n");
            }
        }
    }
    else
    {
        printf("opcao invalida.\n");
    }

    return 0;
}
