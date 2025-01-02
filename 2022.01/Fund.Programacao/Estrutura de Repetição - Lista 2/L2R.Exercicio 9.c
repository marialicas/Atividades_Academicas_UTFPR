/*9) Implemente um programa que lê números informados pelo usuário. O algoritmo deve parar quando informado um
número negativo. Para cada número lido, exceto o número negativo que representa a saída, o algoritmo deverá imprimir
a soma dos dígitos.*/

#include<stdio.h>

int main ()
{
    int num,soma,digito;

    do
    {
        printf("Digite um numero: ");
        scanf("%d",&num);

       if (num>=0)
       {
           soma=0;
           while (num>0)
           {
               digito=num%10;
               soma=soma+digito;
               num=num/10;
           }
           printf("Soma dos digitos: %d\n",soma);
       }

    }while (num>=0);

    return 0;
}
