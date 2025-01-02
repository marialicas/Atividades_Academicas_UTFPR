/*3) A figura a seguir representa uma árvore de decisão para identificar se um paciente está saudável ou
doente. Elabore um programa que implementa essa árvore de decisão*/

#include<stdio.h>

int main ()
{
    char S,s,N,n,senteBem,dor;
    float temperatura;

    printf(" O paciente se sente bem? ");
    scanf("%c", &senteBem);

    switch (senteBem)
    {
        case 's':
        case 'S':
            printf("saudavel.\n");
            break;

        case 'n':
        case 'N':
            printf(" Paciente esta com dor? ");
            fflush(stdin);
            scanf("%c", &dor);
            switch (dor)
            {
                case 's':
                case 'S':
                    printf("doente.\n");
                    break;

                case 'n':
                case 'N':
                    printf (" Informe a temperatura: ");
                    scanf("%f", &temperatura);
                    if (temperatura<=37)
                    {
                        printf("saudavel.\n");
                    }
                    else
                    {
                        printf("doente.\n");
                    }
            }

    }

    return 0;
}
