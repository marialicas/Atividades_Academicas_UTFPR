/*Um professor atribui pesos de 1 a 3 para as notas de três avaliações, respectivamente. Faça um algoritmo
que receba as notas e calcule e mostre a média ponderada. A média e as notas serão valores do tipo float.*/

#include<stdio.h>

int main ()
{
    float nota1, nota2, nota3,mediaPon;

    printf("informe a nota da primeira avaliacao (1 a 3):");
    scanf ("%f", &nota1);

    printf("informe a nota da segunda avaliacao (1 a 3):");
    scanf ("%f", &nota2);

    printf("informe a nota da terceira avaliacao (1 a 3):");
    scanf ("%f", &nota3);

    mediaPon= (nota1*1+nota2*2+nota3*3)/(1+2+3);

    printf ("a media ponderada eh: %.2f\n", mediaPon);
}
