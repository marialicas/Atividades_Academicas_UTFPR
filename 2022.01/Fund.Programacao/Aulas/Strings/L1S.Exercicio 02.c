/*2) Ler um texto com até 50 caracteres e imprimir o texto na vertical com uma palavra por linha.
*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char texto[50];
    int i;

    printf("Informe um texto com ate 50 caracteres: ");
    gets(texto);

    printf("=== TEXTO NA VERTICAL ===\n");

        printf("%s",texto);
        printf("\n");

    return 0;
}
