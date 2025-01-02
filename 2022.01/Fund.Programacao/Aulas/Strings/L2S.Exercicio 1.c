/*2) Ler um texto com até 50 caracteres e imprimir o texto na vertical com uma palavra por linha.
*/
#include<stdio.h>
#include<string.h>

int main ()
{
    char texto[50];
    int i, vet[25],espaco=0,j=0,k;

    printf("Informe um texto com ate 50 caracteres: ");
    gets(texto);

    for (i=0;texto[i]!='\0';i++)
    {
        if (texto[i]==' ')
        {
            espaco++;
        }
        else if (espaco!=0)
        {
           vet[j]=espaco;
           j++;
           espaco=0;
        }
    }
    if (espaco!=0)
    {
        vet[j]=espaco;
        j++;
        espaco=0;
    }
    for (i=0;i<j;i++)
        {
            printf("%d\t",vet[i]);
        }


    return 0;
}
