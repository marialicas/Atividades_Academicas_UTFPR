/*4) Para saber se um n�mero � feliz, deve ser obtido o quadrado de cada d�gito deste n�mero, em seguida
fazer a soma desses resultados. A seguir, o mesmo procedimento deve ser feito com o valor resultante desta
soma. Se ao repetir o procedimento diversas vezes obter o valor 1, o n�mero inicial � considerado feliz.
Por exemplo, o 7 � um n�mero feliz:
7� = 49
4� + 9� = 97
9� + 7� = 130
1� + 3� + 0� = 10
1� + 0� = 1
� poss�vel observar nesse exemplo que os n�meros 49, 97, 130 e 10 tamb�m s�o felizes. Existem infinitos
n�meros felizes.
E um n�mero triste? Como � poss�vel saber que um n�mero n�o � feliz?
Desenvolver uma fun��o que receba um n�mero inteiro positivo e retorne 1 se o n�mero for feliz e 0 se o
n�mero n�o for feliz. Elaborar um programa que use essa fun��o para determinar se um n�mero � ou n�o
feliz.*/

#include<stdio.h>
#include "numeroFeliz.h"

int main ()
{
   int num,produto=1;
   char opcao;

   do
   {
       printf("Informe um numero: ");
       setbuf(stdin,NULL);
       scanf("%d",&num);

       if (numeroFeliz(num)==1)
       {
           printf("Eh feliz\n");
       }
       else
       {
           printf("Nao eh feliz\n");
       }

       printf("\nDeseja repetir o programa (S/N)? ");
       setbuf(stdin,NULL);
       scanf("%c",&opcao);
   }while (opcao=='s' || opcao=='S');
    return 0;
}
