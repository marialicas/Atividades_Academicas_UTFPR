/*3) Uma �rvore A tem 1,50 metros e cresce 2 cent�metros por ano, enquanto uma �rvore B tem 1,10 metros e cresce 3 cent�metros
por ano. Construa um programa que calcule e imprima quantos anos ser�o necess�rios para que a �rvore B seja maior que a
�rvore A.*/

#include<stdio.h>

int main ()
{
    float i=1.50,j=1.10;
    int ano=0;

    while (i>j)
    {
        i=(i+0.02);
        j=(j+0.03);
        ano=ano+1;
    }

    printf("Altura final da arvore A = %.2f\n",i);
    printf("Altura final da arvore B = %.2f\n",j);
    printf("\nSerao necessario %d anos para que a arvore B seja maior que a arvore A.\n",ano);

    return 0;
}

