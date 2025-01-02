/*1) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9 � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares ou 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio.*/

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
