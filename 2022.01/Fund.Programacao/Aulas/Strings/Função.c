#include<stdio.h>
#include <string.h>

/*função para contar a quantidade de caractere*/

int contCarCEspaco (char texto[]);
int contCarSEspaco (char texto[]);
int main ()
{
    char texto [151];
    printf("Informe uma string de ate 150 caracteres: ");
    gets(texto);

    printf("\nNumero de caracteres com espaco: %d",contCarCEspaco(texto));
    printf("\nNumero de caracteres sem espaco: %d",contCarSEspaco(texto));

    return 0;
}

int contCarCEspaco (char texto[])
{
    int i=0;
    while (texto[i]!='\0')
    {
        i++;
    }

    return i;
}

int contCarSEspaco (char texto[])
{
    int i=0,cont=0;
    while (texto[i]!='\0')
    {
        if (texto[i] != ' ')
            {
                cont++;
            }
        i++;
    }

    return cont;
}
