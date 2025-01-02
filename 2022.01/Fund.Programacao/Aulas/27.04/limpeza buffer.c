// usado para caracter//
/* scanf tem o objetivo de ler um caracter do buffer de entrada,
foi criado para receber no final da entrada um: enter, espaço ou tab.*/

#include<stdio.h>

int main ()
{
    char a,b,c; // char armazena apenas um caracter//
    printf("informe o valor de a:");
    scanf("%c",&a);

    printf("informe o valor de b:");
    fflush(stdin); // limpeza
    scanf("%c",&b);

    printf("informe o valor de c:");
    fflush(stdin);
    scanf("%c",&c);

    printf("%c, %c ,%c\n",a, b, c);

    return 0;
}
