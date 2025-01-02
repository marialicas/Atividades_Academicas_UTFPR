/*2) Fazer duas funções: uma para calcular o fatorial de um número e a outra para mostrar o fatorial de um
número. Ambas as funções devem ser implementadas em um arquivo de cabeçalho chamado "fatorial.h".
Elaborar um programa que use essas funções para:
a) Calcular e mostrar o fatorial dos números entre 1 e 8.
b) Calcular e mostrar o fatorial de um valor informado pelo usuário. Continuar a leitura enquanto forem
informados valores positivos.
Exemplo de entrada e saída:*/

#include<stdio.h>
#include "fatorial.h"

int main ()
{
    int num,i;
    char escolha,opcao;

    do
    {
        printf("A - Fatorial entre 1 e 8\nB - Fatorial de um numero.\n");
        printf("opcao: ");
        fflush(stdin);
        scanf("%c",&escolha);

        switch (escolha)
        {
            case 'a':
            case 'A':
                for (i=1;i<=8;i++)
                {
                    mostrarFatorial(i);

                    if (fatorial(i))
                    {
                        printf("%lld",fatorial(i));
                    }
                    printf("\n");
                }
                break;
            case 'b':
            case 'B':
                num=1;
                while (num!= 0 && num>0)
                {
                    printf ("\n\nInforme um numero: ");
                    fflush(stdin);
                    scanf("%d",&num);

                        if (num !=0)
                        {
                            mostrarFatorial(num);
                            if (fatorial(num)!=1)
                            {
                                printf("%lld",fatorial(num));
                            }
                        }
                }
                break;
        }
        printf("\n\nDeseja repetir o programa (S ou N)? ");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
