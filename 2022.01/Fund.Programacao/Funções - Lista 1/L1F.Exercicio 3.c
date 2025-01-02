/*3) Criar fun��o para:
a) Receber, por par�metro, um n�mero inteiro e positivo e retornar a quantidade de divisores que esse
n�mero possui.
b) Mostrar os divisores de um n�mero. Essa fun��o recebe como par�metro o n�mero e mostra os divisores
de 1 at� o n�mero passado como par�metro da fun��o.
c) Receber, por par�metro, um n�mero positivo e retornar a soma dos divisores que esse n�mero possui.
d) Receber, por par�metro, dois n�meros e retornar o M�ximo Divisor Comum dos dois n�meros.
Salvar todas as fun��es dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um n�mero
2 - Divisores de um n�mero
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois n�meros
*/

#include<stdio.h>
#include"divisores.h"

int main ()
{
    int i, num, num2,escolha;
    char opcao;

    do
    {
        printf("\n1 - Quantidade de divisores de um numero\n2 - Divisores de um numero\n");
        printf("3 - Divisores, quantidade e soma de um intervalo\n4 - Maximo Divisor Comum de dois numeros\n");
        printf("opcao: ");
        fflush(stdin);
        scanf("%d",&escolha);

        switch (escolha)
        {
            case 1:
                printf("\nInforme um numero para mostrar a quantidade de divisores: ");
                scanf("%d",&num);

                printf("%d divisores\n", qtdeDivisores(num));
                break;

            case 2:
                printf("\nInforme um numero para mostrar os seus divisores: ");
                scanf("%d", &num);

                mostrarDivisores(num);
                printf("\n");
                break;

            case 3:
               printf("\nInforme um limite inferior: ");
               scanf("%d",&num);
               printf("Informe um limite superior: ");
               scanf("%d",&num2);

               for (i=num;i<=num2;i++)
               {
                   printf("%2d - ", i);
                   mostrarDivisores(i);
                   printf("--> Qtde: %d",qtdeDivisores(i));
                   printf("--> Soma: %d", somaDivisores(i));
                   printf("\n");
               }
               break;

            case 4:
                printf("\nInforme o primeiro valor: ");
                scanf("%d",&num);
                printf("Informe o segundo valor: ");
                scanf("%d",&num2);

                printf("MDC: %d", MaxDivisorComum (num,num2));
                break;
        }


        printf("\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao== 's' || opcao =='S');


    return 0;
}
