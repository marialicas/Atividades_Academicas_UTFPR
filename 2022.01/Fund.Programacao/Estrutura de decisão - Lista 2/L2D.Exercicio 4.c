/* 4) Implemente um programa que adivinhe o "número mágico" entre 0 e 10. O programa deverá imprimir a mensagem
"Certo! %d é o número mágico" quando o jogador acerta o número mágico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um número maior que o número mágico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um número menor que o número mágico. O número mágico é produzido usando o gerador de números
randômicos de C (função rand(), que exige o uso da biblioteca stdlib.h)*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main ()
{
    int num, x;

    srand (time(NULL));
    x=rand()%11;

    printf("Informe um numero entre 0 e 10: ");
    scanf("%d", &num);

    do
    {
            if (num>x)
            {
                printf("Errado, muito alto\n");
            }
            else
            {
                printf("Errado, muito baixo\n");
            }

            printf("\nInforme um numero entre 0 e 10: ");
            scanf("%d", &num);

    } while (num!=x);
    printf("Certo %d eh o numero magico\n", x);

    return 0;
}
