/*7) Desafio: Strings que gaguejam
Criar uma função que duplique cada vogal da string.*/

#include<stdio.h>
#include<string.h>
void duplicaVogal (char str[]);

int main ()
{
    char opcao,texto[100];

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);

        printf("\n=== STRING COM CADA VOGAL DUPLICADA===\n");
        duplicaVogal(texto);

        printf("\n\nDeseja continuar no programa: ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='S' || opcao =='s');
}

void duplicaVogal (char str[])
{
    char vogalD[100];
    int i,j,k,cont=0,l=0;

    for (i=0;str[i]!='\0';i++)
    {
       if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
       {
           cont++;
           for (k=1;k<=cont;k++)
           {
               vogalD[l]=str[i];
               l++;
           }
       }
       else
       {
           vogalD[l]=str[i];
           l++;
       }
    }
    vogalD[l]='\0';

    printf("%s",vogalD);
}
