#include<stdio.h>

int main ()
{
    char opcao;
    int limiteI, limiteS,i;

    do
    {
        printf("Informe um valor inteiro maior que 0 para o limite inferior: ");
        scanf("%d",&limiteI);
        if (limiteI>0)
        {
            printf("Informe um valor maior que o limite inferior para o limite superior do intervalo: ");
            scanf("%d",&limiteS);
            if (limiteS<limiteI)
            {
                printf("numero invalido.\n");
            }
        }
        else
        {
            printf("numero invalido.\n");
        }

        for (i=limiteI;i<=limiteS;i++)
        {
            printf("\n%d ==>",i);
        }


        printf("Deseja continuar no programa (S/s)?");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao=='s' || opcao=='S');

}
