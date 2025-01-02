/*lista 1 exercicio 1*/

#include<stdio.h>
#include "primo.h"

int main ()
{
    int num, i, somaPrimos, contPrimos;
    float media;
    char escolha, opcao;

    do
    {
       printf("A - Verificar se um numero eh ou nao eh primo.\n");
       printf("B - Exibir os numeros primos entre 1 e 100\n");
       printf("C - Media dos numeros primos entre 200 e 100\n");
       fflush(stdin);
       scanf("%c", &escolha);

       switch (escolha)
       {
            case 'a':
            case 'A':
                do
                {
                    printf("\nInforme um numero positivo: ");
                    scanf ("%d", &num);

                    if (num <=0)
                    {
                        printf("Valor invalido.\n");
                    }
                }while (num<=0);

                if (primo (num) == 0) // se o retorno da função for ingual a 0
                {
                    printf("%d eh primo.\n",num);
                }
                else
                {
                    printf("%d nao eh primo\n",num);
                }
                break;
            case 'b':
            case 'B':
                for (i=1;i<=100;i++)
                {
                    if (primo(i)==0)
                    {
                        printf ("%d\t",i);
                    }
                }
                break;

            case 'c':
            case 'C':
                contPrimos=0;
                somaPrimos=0;
                for (i=200;i>=100;i--)
                {
                    if (primo(i)==0)
                    {
                        contPrimos++;
                        somaPrimos=somaPrimos+i;
                    }
                }
                media=somaPrimos/(float)contPrimos;
                printf("\nMedia dos numeros primos entre 200 e 100: %.2f",media);

                break;
            default:
                printf("Opcao invalida!\n");
       }
       printf("\nDeseja repetir o programa (S ou N) ?");
       setbuf(stdin,NULL);
       scanf("%c",&opcao);
    }while (opcao == 'S' || opcao== 's');
}
