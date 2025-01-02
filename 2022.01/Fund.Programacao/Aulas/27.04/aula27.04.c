#include<stdio.h>

int main ()
{
    char sabor;

    printf("informe o sabor da pizza M ou C: ");
    scanf("%c", &sabor);

    switch (sabor)
    {
        case 'M': // ' ' so para caracter (char)
        case 'm':
            printf("Muzzarela\n");
            break;
        case 'C':
        case 'c':
            printf("Calabresa\n");
            break;
        default:
            printf ("opcao incorreta.");
    }
    return 0;
}
