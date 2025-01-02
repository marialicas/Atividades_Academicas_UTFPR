/*1) Fazer uma fun��o para verificar se um n�mero equivale a soma dos n primeiros �mpares iniciando em 1.
Por exemplo, 9 � um n�mero que tem essa caracter�stica porque 1 + 3 + 5 = 9 (soma dos n primeiros
n�meros �mpares iniciando em 1). Essa fun��o recebe como par�metro um valor inteiro e retorna 's' se o
n�mero equivale a soma dos n primeiros �mpares ou 'n' caso n�o.
Fazer um programa que use essa fun��o para:
a) Ler um n�mero inteiro informado pelo usu�rio � verificar se o mesmo tem essa caracter�stica.
b) Mostrar todos os n�meros que t�m ou n�o t�m essa caracter�stica e pertencem a um intervalo informado
pelo usu�rio*/

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
                        printf("n�o equivale a soma");
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
