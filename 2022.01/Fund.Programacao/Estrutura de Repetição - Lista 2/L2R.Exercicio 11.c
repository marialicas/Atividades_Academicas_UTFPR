/*11) Fa�a o programa que apresente a seguinte sa�da como no exemplo, solicitando ao usu�rio o n�mero
m�ximo (deve ser positivo)*/

#include<stdio.h>

int main ()
{
   int num,inicial,i;
   char resposta;

   do
   {
       printf("Informe um numero positivo: ");
       scanf("%d",&num);

       if(num>0)
       {
          inicial=1;
          do
          {
              for(i=0;i<=num;i++)
              {
                  printf("%d  ",inicial);
              }
              printf("\n");
              inicial=inicial+1;
          }while(inicial<=num);
       }
       else
       {
           printf("numero invalido");
       }

       printf("\n\ndeseja repetir o programa (s ou n)?");
       fflush(stdin);
       scanf("%c",&resposta);
   }while (resposta =='S' || resposta == 's');

}
