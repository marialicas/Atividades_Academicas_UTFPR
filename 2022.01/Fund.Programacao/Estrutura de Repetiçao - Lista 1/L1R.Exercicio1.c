 /* 1) Ler um n�mero maior que 2 e imprimir todos os pares entre 2 e o n�mero lido. Imprimir a soma dos pares,
o produto dos �mpares que s�o divis�veis por 9 e a m�dia de todos os n�meros do intervalo.*/

#include<stdio.h>

int main ()
{
    int i,num, soma=0, produto=1, cont=0;
    float media=0;

    printf("informe um numero maior que 2: ");
    scanf("%d", &num);

    for (i=1; i<=num; i++)
    {
        cont++;
        media=media+i;

        if (i%2==0)
        {
            printf("%d\t", i);
            cont++;
            soma=soma+i;
        }
        if (i%2!=0 && i%9==0)
        {
           cont++;
           produto=produto*i;
        }

    }
    printf("\n\nSoma dos pares: %d\n", soma);
    printf("Produto dos impares divisiveis por 9: %d\n", produto);
    printf("Media de todos os numeros %.2f\n",media/num);

    return 0;
}
