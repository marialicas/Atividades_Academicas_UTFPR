#include<stdio.h>
#include<string.h>

//Quantidade de vogais em uma string

int main ()
{
    int i,cont=0,j,consoante=0, tam=0;
    char string[50] = "Bala de coco", vogais[11] = "aeiouAEIOU";

    for (i=0;string[i]!='\0';i++)
    {
        tam++;
           for (j=0;vogais[j]!='\0';j++)
           {
               if (string[i] != vogais[j])
               {
                   cont++;
               }
           }

    }
    puts(string);
    printf("Quantidade de Vogais: %d\n",cont);
    printf("Quantidade de Consoante: %d\n",consoante);

    return 0;
}
