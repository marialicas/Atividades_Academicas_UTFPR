//is = boolean, vai dar 0 (true) ou 1 (false)//

#include<stdio.h> // usar o printf e o scanf//
#include<ctype.h>

int main ()
{
    char ch;

    printf ("informe um caracter: ");
    scanf ("%c", &ch);

      /*printf("convertendo o caractere para maiusculo: ");
      printf ("%c\n", ch-32);
      //printf ("%c \n", toupper(ch)); usando a formula

      printf ("convertendo para minusculo: ");
      printf ("%c\n", ch+32);*/

    printf("verificar se o caracter eh uma letra:\n");
    if (ch>= 'A' && ch<='Z')
    {
        printf("caracter eh uma letra maiscula\n");
    }

    else if (ch>= 'a' && ch<='z')
    {
        printf ("caracter eh uma letra minuscula\n");
    }

    else
    {
        printf ("caracter nao eh uma letra\n");
    }

    /*if (isalpha (ch))
    {
        printf ("caracter informado eh uma letra\n");
    }
    else
    {
        printf ("caracter informado nao eh uma letra\n");
    }*/

    return 0;
}
