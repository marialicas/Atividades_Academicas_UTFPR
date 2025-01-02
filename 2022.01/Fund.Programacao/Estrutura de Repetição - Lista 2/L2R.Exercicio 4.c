/*4) Ler caracteres e parar quando o usuário informar o caractere '0'. Utilizando a tabela ASCII contar quantos caracteres são letras
maiúsculas, quantos são letras minúsculas e quantos caracteres não são letras. Sugestão: utilizar o código numérico para comparar
(A equivale a 65, B a 66...).*/

#include<stdio.h>

int main ()
{
    int maiscula=0,minuscula=0,nLetra=0;
    char caractere;

    do
    {
        printf("Informe um caractere: ");
        fflush(stdin);
        scanf("%c", &caractere);

        if (caractere>=65 && caractere<=90)
        {
            maiscula++;
        }
        if (caractere>=97 && caractere<=122)
        {
            minuscula++;
        }
        if (!(caractere>=65 && caractere<=90) && !(caractere>=97 && caractere<=122) && (caractere!=48))
        {
            nLetra++;
        }


    }while (caractere!=48);

    printf("\nForam Informadas %d letras maisculas.\n",maiscula);
    printf("Foram Informadas %d letras minuscula.\n",minuscula);
    printf("Foram Informadas %d caracteres que nao sao letras.\n",nLetra);

    return 0;
}
