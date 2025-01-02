/*Escreva um algoritmo que leia o comprimento (cm), a largura (cm) e a altura (cm) de uma caixa retangular
e calcule o seu volume (cm3), cuja fórmula é:
Volume = Comprimento * Largura * Altura*/

#include<stdio.h>

int main ()
{
   int comprimento, largura, altura, volume;

   printf("informe o comprimento:");
   scanf ("%d",&comprimento);

   printf ("informe a largura:");
   scanf("%d",&largura);

   printf("informe a altura");
   scanf("%d",&altura);

   volume=comprimento*largura*altura;

   printf("volume eh igual a: %d cm3", volume);

   return 0;
}
