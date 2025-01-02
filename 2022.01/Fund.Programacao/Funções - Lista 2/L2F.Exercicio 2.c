/*2) (DESAFIO) Fazer um programa que receba um valor inteiro, que se refere a quantidade de linhas de um
triângulo. Implementar no próprio programa uma função que recebe como parâmetro esse valor e imprime
uma árvore de Natal, como mostrado no exemplo a seguir.*/

#include<stdio.h>
#include"arvore.h"

int main ()
{
    int altura;
    char opcao;

    do
    {
        printf("\nInsira a altura (em linhas) da arvore: ");
        scanf("%d",&altura);

        arvore(altura);

        printf("\nDeseja repetir o programa (S ou N)?");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao=='S');

    return 0;
}
