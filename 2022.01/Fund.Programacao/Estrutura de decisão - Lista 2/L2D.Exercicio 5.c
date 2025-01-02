/*5) A função toupper() transforma um caractere para maiúsculo. Para usar esta função é necessário incluir no cabeçalho
a biblioteca ctype.h. Faça um programa que receba um caractere via teclado, transforme esse caractere em maiúsculo e verifique se ele
pertence ou não ao alfabeto (A, B, ..., Z). Caso ele pertença, o programa deve gerar a saída
printf("O caracter digitado pertence ao albafeto\n") e, com o uso da estrutura switch
- case, verificar se o caractere é uma vogal (neste caso, a saída deve ser printf("VOGAL %c\n", ch))
ou uma consoante (neste caso, a saída deve ser printf("CONSOANTE %c\n", ch)). Caso o caractere
não pertença ao alfabeto, o programa deverá gerar a saída printf("O caracter digitado não
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
