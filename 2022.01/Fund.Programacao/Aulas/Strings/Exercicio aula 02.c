#include<stdio.h>
#include<string.h>
int letrasMaiscula (char str[]);

int main ()
{
    char texto[50]= "Bala de Coco";

    puts(texto);
    printf("Quantidade de Letras Maisculas: %d\n",letrasMaiscula(texto));
}

int letrasMaiscula (char str[])
{
    int i=0,cont=0;

    while (str[i]!='\0')
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            cont++;
        }
        i++;
    }
    return cont;
}
