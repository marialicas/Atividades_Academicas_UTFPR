/*) Apresentar os n�meros divis�veis por 4 ou m�ltiplos de 10 entre 500 e 0 e a m�dia desses m�ltiplos.
Exemplo:*/

#include<stdio.h>

int main ()
{
   int i,cont=0;
   float divisiveisDez=0;

   for (i=500;i>=1;i--)
   {
       if (i%4==0 || i%10==0)
       {
           printf("%d\t", i);
           divisiveisDez=divisiveisDez+i;
           cont++;
       }
   }
   printf("\n\nMedia: %.2f\n",divisiveisDez/cont);
}
