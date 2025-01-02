/* 4) Implemente um programa que adivinhe o "n�mero m�gico" entre 0 e 10. O programa dever� imprimir a mensagem
"Certo! %d � o n�mero m�gico" quando o jogador acerta o n�mero m�gico, a mensagem "Errado, muito alto", caso o
jogador tenha digitado um n�mero maior que o n�mero m�gico e a mensagem "Errado, muito baixo", caso o jogador
tenha digitado um n�mero menor que o n�mero m�gico. O n�mero m�gico � produzido usando o gerador de n�meros
rand�micos de C (fun��o rand(), que exige o uso da biblioteca stdlib.h)*/

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
