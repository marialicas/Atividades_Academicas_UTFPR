/*5) A fun��o toupper() transforma um caractere para mai�sculo. Para usar esta fun��o � necess�rio incluir no cabe�alho
a biblioteca ctype.h. Fa�a um programa que receba um caractere via teclado, transforme esse caractere em mai�sculo e verifique se ele
pertence ou n�o ao alfabeto (A, B, ..., Z). Caso ele perten�a, o programa deve gerar a sa�da
printf("O caracter digitado pertence ao albafeto\n") e, com o uso da estrutura switch
- case, verificar se o caractere � uma vogal (neste caso, a sa�da deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a sa�da deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
n�o perten�a ao alfabeto, o programa dever� gerar a sa�da printf("O caracter digitado n�o
pertence ao albafeto\n").*/

#include<stdio.h>
#include<ctype.h>

int main ()
{
    char ch;

    printf("Informe um caracter: ");
    scanf("%c", &ch);

    ch=toupper(ch);

    if (ch>='A' && ch<='Z')
    {
        printf("o caracter digitado pertence ao alfabeto.\n");

        switch (ch)
        {
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            printf ("VOGAL %c\n", ch);
            break;

        case 'B':
        case 'C':
        case 'D':
        case 'F':
        case 'G':
        case 'H':
        case 'J':
        case 'K':
        case 'L':
        case 'M':
        case 'N':
        case 'P':
        case 'Q':
        case 'R':
        case 'S':
        case 'T':
        case 'V':
        case 'W':
        case 'X':
        case 'Y':
        case 'Z':
            printf ("CONSOANTE %c\n", ch);
            break;
        }
    }
    else
    {
       printf("o caracter nao pertence ao alfabeto");
    }
    return 0;
}
