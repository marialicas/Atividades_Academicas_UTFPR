
#include<stdio.h>

int main ()
{
    int contMaiscula=0,contMinuscula=0,contNLetra=0;
    char ch='1';

    while (ch!='0')
    {
        printf("Informe um caracter: ");
        setbuf(stdin,NULL);
        scanf("%c",&ch);

        if (ch!='0')
        {
            if (ch>='A' && ch<='Z')
            {
                contMaiscula++;
            }
            else if (ch>='a' && ch<='z')
            {
                contMinuscula++;
            }
            else
            {
                contNLetra++;
            }
        }
    }

    printf("Letras Maiscula: %d\n",contMaiscula);
    printf("Letras Minuscula: %d\n",contMinuscula);
    printf("Nao sao letras: %d\n",contNLetra);


}

