/*5) Usar a fun��o criada no exerc�cio anterior para mostrar todos os n�meros felizes existentes no intervalo de
1 at� 500*/

#include<stdio.h>
#include "numeroFeliz.h"

int main ()
{
   int num=500,i,cont=0;
   char opcao;

   do
   {

       for (i=1;i<=num;i++)
       {
           if (numeroFeliz(i)==1)
           {
               printf("%d\t",i);
               cont++;
           }
           if (cont==9)
           {
               printf("\n");
               cont=0;
           }
       }

       printf("\nDeseja repetir o programa (S/N)? ");
       setbuf(stdin,NULL);
       scanf("%c",&opcao);
   }while (opcao=='s' || opcao=='S');
    return 0;
}
