#include<stdio.h>
#include<string.h>

int main ()
{
    char texto [25];

    printf("Informe uma string: ");
    gets(texto);

}

void strRep (char str[])
{
    int i,j;

    while (str[i]!='\0')
    {
        str[i]==str[j];
        j++;
        i++;
    }
}
