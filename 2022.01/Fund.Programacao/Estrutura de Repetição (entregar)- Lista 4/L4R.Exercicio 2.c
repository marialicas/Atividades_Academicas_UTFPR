/*2) Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.*/

#include<stdio.h>

int main ()
{
    int num,i,j,k,primos,divisor;
    char opcao;

    do
    {
       printf("Informe um numero positivo: ");
       scanf("%d", &num);

       if (num>-1)
       {
           for (i=num;i<=num+10;i++)
           {
               printf("%d => ",i);
               primos=0;
               for (j=1;j<=i;j++)
               {
                   divisor=0;
                   for (k=1;k<=j;k++)
                   {
                       if (j%k==0)
                           {
                               divisor++;
                           }
                   }
                   if (divisor==2)
                   {
                       printf("%d ",j);
                       primos++;
                   }
               }
               printf(" ==> %d primo (s).\n",primos);
            }
       }
       else
       {
           printf("Numero invalido.\n");
       }

       printf("Deseja continuar no programa (S/s)? ");
       fflush(stdin);
       scanf("%c", &opcao);
    }while (opcao== 'S' || opcao== 's');

    return 0;
}
