/*1) Fazer uma fun��o para verificar se um n�mero � ou n�o primo. A fun��o ser� implementada em um
arquivo de cabe�alho "primo.h" e dever� retornar 0 se o n�mero for primo ou 1, caso o n�mero n�o seja
primo. Elaborar um programa para usar essa fun��o para:
a) Verificar se um n�mero informado pelo usu�rio � ou n�o um n�mero primo. Validar a entrada para que o
usu�rio informe um n�mero positivo.
b) Mostrar os primos no intervalo entre 1 e 100.
c) Fazer a m�dia dos primos entre 200 e 100.*/

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
