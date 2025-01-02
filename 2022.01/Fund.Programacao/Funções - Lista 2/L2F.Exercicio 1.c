/*1) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9 é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares ou 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário.*/

#include<stdio.h>
#include"somaImpares.h"

int main ()
{
    int num,escolha,num2,i;
    char opcao,retorno;

    do
    {
        printf("\n1 - Verifica se o numero equivale a soma dos impares\n2 - Verifica numeros que equivalem a soma dos impares\n");
        printf("opcao: ");
        scanf("%d",&escolha);

        switch(escolha)
        {
            case 1:
                printf("Informe um numero: ");
                scanf("%d", &num);

                printf("%d = ",num);
                retorno=somaImpares(num);
                if (retorno=='s')
                {
                    printf("==> Equivale a soma dos Impares\n");
                }
                else
                {
                    printf("==> Nao equivale a soma dos Impares\n");
                }
                break;

            case 2:
                printf("Informe o valor limite inferior de um intervalo: ");
                scanf("%d",&num);
                printf("Informe o valor limite superior de um intervalo: ");
                scanf("%d",&num2);

                for (i=num;i<=num2;i++)
                {
                    printf("%d = ",i);
                    retorno=somaImpares(i);
                    if (retorno=='s')
                    {
                        printf("==> Equivale a soma dos Impares\n");
                    }
                    else
                    {
                        printf("==> Nao equivale a soma dos Impares\n");
                    }
                }
        }

        printf("\nDeseja repetir o programa (S ou N)?");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
