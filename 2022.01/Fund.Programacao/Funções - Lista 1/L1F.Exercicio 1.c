/*1) Fazer uma função para verificar se um número é ou não primo. A função será implementada em um
arquivo de cabeçalho "primo.h" e deverá retornar 0 se o número for primo ou 1, caso o número não seja
primo. Elaborar um programa para usar essa função para:
a) Verificar se um número informado pelo usuário é ou não um número primo. Validar a entrada para que o
usuário informe um número positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a média dos primos entre 200 e 100.*/

#include<stdio.h>
#include "primo.h"

int main ()
{
    int num,i,cont,primos,soma;
    char opcao,escolha;

    do
    {
        printf("A - Verificar se um numero eh primo\nB - Primos entre 1 e 100\nC - Media dos primos entre 200 e 100\n");
        printf("opcao: ");
        fflush(stdin);
        scanf("%c", &escolha);

        switch (escolha)
        {
            case 'A':
            case 'a':
                printf("\nInforme um numero: ");
                scanf("%d", &num);

                if (primo(num)== 0)
                {
                    printf("%d eh um numero primo.\n",num);
                }
                else
                {
                    printf("%d nao eh um numero primo.\n",num);
                }
                break;

            case 'b':
            case 'B':
                cont=0;
                for (i=2;i<=100;i++)
                {
                    if (primo (i)==0)
                    {
                        printf("%d\t",i);
                        cont++;
                    }
                    if (cont==10)
                    {
                        printf("\n");
                    }
                }
                break;
            case 'c':
            case 'C':
                soma=0;
                primos=0;
                for (i=200;i>=100;i--)
                {
                    if (primo(i)==0)
                    {
                        soma=soma+i;
                        primos++;
                    }
                }
                printf("A media dos primos entre 200 e 100: %.2f", (float)soma/primos);
        }

        printf("\nExecutar Novamente (S ou N): ");
        fflush(stdin);
        scanf("%c",&opcao);

    }while (opcao=='s' || opcao=='S');

    return 0;
}
