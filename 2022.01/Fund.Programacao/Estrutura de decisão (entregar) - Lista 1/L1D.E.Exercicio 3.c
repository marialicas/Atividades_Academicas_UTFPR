/*3) A figura a seguir representa uma �rvore de decis�o para identificar se um paciente est� saud�vel ou
doente. Elabore um programa que implementa essa �rvore de decis�o*/

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
