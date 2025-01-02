#include<stdio.h>

int main ()
{
    char opcao;
    int pessoas;
    float distancia,totalP;

    do
    {
        printf("Informe o total de pessoas que farao a caminhada: ");
        scanf("%d",&pessoas);
        if (pessoas>0)
        {
            printf("Informe o valor da distancia a ser percorrida em metros: ");
            fflush(stdin);
            scanf("%f",&distancia);
            if (distancia<0)
            {
                printf("numero invalido\n");
            }
        }
        else
        {
            printf("numero invalido\n");
        }

        printf("iniciando a caminhada de %.2f metros",distancia);

        printf("\nDeseja repetir o programa?");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao=='s' || opcao=='S');
}
