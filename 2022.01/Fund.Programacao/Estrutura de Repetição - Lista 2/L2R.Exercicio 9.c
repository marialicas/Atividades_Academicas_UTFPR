/*9) Implemente um programa que l� n�meros informados pelo usu�rio. O algoritmo deve parar quando informado um
n�mero negativo. Para cada n�mero lido, exceto o n�mero negativo que representa a sa�da, o algoritmo dever� imprimir
a soma dos d�gitos.*/

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
