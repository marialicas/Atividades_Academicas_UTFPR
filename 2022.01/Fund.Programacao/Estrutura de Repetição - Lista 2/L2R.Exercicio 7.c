/*7) Elaborar um programa que determine a potência de um número. O usuário informa a base e o expoente e o
programa informa o resultado da base elevada ao expoente. Não usar funções prontas do C para fazer o cálculo da
potência.*/

#include<stdio.h>

int main ()
{
    int base,exp,i,produto,cont=0;

    printf("Informe um valor da base: ");
    scanf("%d",&base);
    printf("Informe o valor do expoente: ");
    scanf("%d",&exp);

    produto=base;
    for (i=1; i<=(exp-1);i++)
    {
        printf(" %d * ", base);

    }
    printf("%d = ", base);

    while (cont<(exp-1))
    {
        produto=produto*base;
        cont++;
    }

    printf("%d\n",produto);
}
