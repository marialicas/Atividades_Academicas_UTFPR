/*12) Faça o programa que apresente a seguinte saída como no exemplo, perguntando ao usuário o número
máximo (deve ser positivo).*/

#include<stdio.h>

int main ()
{
    int num,i;
    char opcao;

    do
    {
        printf("Informe um numero positivo: ");
        scanf("%d",&num);

        if(num>0)
        {

            do
            {
               for(i=0;i<=num;i++)
               {
                   printf("%d",i+1);
               }
               printf("\n");
            }while
        }
        else{
            printf("numero invalido");
        }

        printf("\nDeseja digitar outro numero: ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao=='s' || opcao=='S');
}
