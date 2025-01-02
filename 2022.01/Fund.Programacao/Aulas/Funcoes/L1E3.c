/*
3) Criar função para:
a) Receber, por parâmetro, um número inteiro e positivo e retornar a quantidade de divisores que esse
número possui.
b) Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.
c) Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
d) Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
Salvar todas as funções dentro de uma biblioteca chamada Divisores.h. Use a biblioteca "Divisores.h" em um
programa para gerar o seguinte menu:
1 - Quantidade de divisores de um número
2 - Divisores de um número
3 - Divisores, quantidade e soma de um intervalo
4 - Maximo Divisor Comum de dois números
*/

#include <stdio.h>
#include "divisores.h"
int main()
{

    int escolha, num1, num2, retorno, i;
    char opcao;

    do
    {
        printf("1 - Quantidade de divisores de um numero\n");
        printf("2 - Divisores de um numero\n");
        printf("3 - Divisores, quantidade e soma de um intervalo\n");
        printf("4 - MDC\n");

        printf("Opcao: ");
        scanf("%d",&escolha);

        switch(escolha)
        {
        case 1:
        {
            printf("\nInforme um numero para mostrar a quantidade de divisores: ");
            scanf("%d",&num1);
            //retorno=qtdeDivisores(num1)
            printf("%d possui %d divisores",num1,qtdeDivisores(num1));
            break;
        }

        case 2:
        {
            printf("\nInforme um numero para mostrar os seus divisores: ");
            scanf("%d",&num1);
            monstrarDivisores(num1); // quando não tem retorno
            break;
        }

        case 3:
        {
            printf("\nInforme o limite inferior: ");
            scanf("%d",&num1);

            printf("Informe o limite superior: ");
            scanf("%d",&num2);





            break;

        }

        case 4:

        {

            printf("\nInforme um numero: ");

            scanf("%d",&num1);

            printf("Informe outro numero: ");

            scanf("%d",&num2);



            break;

        }

        default:

        {

            printf("Opção inválida!\n");

        }

        }

        printf("\n\nDeseja continuar no programa (S ou N)? ");

        scanf(" %c",&opcao);



    }

    while((opcao == 'S') || (opcao == 's'));



    return 0;

}

