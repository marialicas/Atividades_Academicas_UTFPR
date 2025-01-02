//Somar e Multiplicra os números pares

#include<stdio.h>

int main ()
{
    int i,cont=0, soma=0, produto=1;

    for (i=0; i<=10; i++)
    {
        if (i%2==0)
        {
            cont++;
            soma=soma+i; //soma+
            if(i!=0)
            {
                produto=produto*i;
            }
        }
    }
    printf("Resultado de pares: %d\n",cont);
    printf("soma dos numeros pares: %d\n", soma);
    printf("multiplicacao dos numeros pares: %d\n", produto);

    return 0;
}
