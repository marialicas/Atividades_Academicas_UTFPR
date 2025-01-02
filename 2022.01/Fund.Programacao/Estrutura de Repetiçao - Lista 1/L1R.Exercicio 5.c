/*5)Ler um número que indica a quantidade de ímpares iniciando em 1 que deve ser mostrada. O valor
informado para a quantidade deve ser maior que 0. Validar a entrada*/

#include<stdio.h>

int main ()
{
    int quantidade,i,contImpares;

    do
    {
        printf ("quantos numeros impares quer mostrar? ");
        scanf ("%d", &quantidade);

        if (quantidade<0)
        {
             printf("Numero invalido.\n");
        }
    }while (quantidade<0);

    i=1;
    contImpares=0;
    do
    {
        if (i%2!=0)
        {
            printf("%d\n",i);
            contImpares++;
        }
        i++;

    }while (contImpares<quantidade);
    return 0;
}
