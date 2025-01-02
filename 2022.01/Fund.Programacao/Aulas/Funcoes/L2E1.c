/*1) Fazer uma função para verificar se um número equivale a soma dos n primeiros ímpares iniciando em 1.
Por exemplo, 9 é um número que tem essa característica porque 1 + 3 + 5 = 9 (soma dos n primeiros
números ímpares iniciando em 1). Essa função recebe como parâmetro um valor inteiro e retorna 's' se o
número equivale a soma dos n primeiros ímpares ou 'n' caso não.
Fazer um programa que use essa função para:
a) Ler um número inteiro informado pelo usuário é verificar se o mesmo tem essa característica.
b) Mostrar todos os números que têm ou não têm essa característica e pertencem a um intervalo informado
pelo usuário*/

#include<stdio.h>
char somaImpares (int num);

int main ()
{
    char opcao,retorno;
    int num,escolha,num1,num2,i;

    printf("1- Verifica se o numero equivale a soma dos impares.\n2-Verifica numeros que equivalem a soma dos impares.\n");
    printf("opcao: ");
    scanf("%d",&escolha);

    do
    {
        switch (escolha)
        {
            case 1:
                {
                    printf("\ninforme um numero: ");
                    scanf("%d",&num);

                    printf("\n%d = ",num);
                    retorno=somaImpares(num);

                    if (retorno='s')
                    {
                        printf("\tEquivale a soma.");
                    }
                    else
                    {
                        printf("não equivale a soma");
                    }
                }
                break;
            case 2:
                printf("informe o valor do limite inferior de um intervalo: ");
                scanf("%d",&num1);
                printf("informe o valor do limite superior de um intervalo: ");
                scanf("%d",&num2);

                printf("\n");
                for (i=num1;i<=num2;i++)
                {
                    printf("%2d = %d",i);
                    retorno=somaImpares(i);
                    if (retorno =='s')
                    {
                        printf("=> equivale a soma dos impares");
                    }
                    else
                    {
                        printf("=> equivale a soma dos impares");
                    }
                }
                break;

        }
        printf("\nDeseja repetir o programa (S/N)? ");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao =='s' || opcao=='S');

    return 0;
}

char somaImpares (int num)
{
    int i,soma=0;
    char resultado='n';

    for (i=1;i<=num;i=(i+2))
    {
        printf("%d",i);
        soma=soma+i;

        if (soma==num)
        {
            break;
        }
    }
    if (soma==num)
    {
        resultado='s';
    }

    return resultado;
}
