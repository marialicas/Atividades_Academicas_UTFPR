#include<stdio.h>
int somaDivisores (int num);
int qtdeDivisores (int num);
void mostrarDivisores (int num);
int somaDivisoresNP (int num);

int main ()
{
    int limI,limS,i;
    char escolha;
    do
    {
        printf("Informe o limite Inferior: ");
        fflush(stdin);
        scanf("%d",&limI);

        printf("Informe o limite Superior: ");
        fflush(stdin);
        scanf("%d",&limS);

    } while (limI<0 && limS<0);

    printf("\nA-Soma dos divisores\nB-Numero perfeito\n");
    printf("opcao: ");
    fflush(stdin);
    scanf("%c",&escolha);

    switch (escolha)
    {
        case 'A':
        case 'a':
        if (limI<limS)
        {
            for (i=limI;i<=limS;i++)
            {
                printf("%d - ",i);
                mostrarDivisores(i);
                printf("Qtde: %d ",qtdeDivisores(i));
                printf("Soma: %d",somaDivisores(i));
                printf("\n");
            }
        }
        else
        {
            for (i=limS;i<=limI;i++)
            {
                printf("%d - ",i);
                mostrarDivisores(i);
                printf("Qtde: %d ",qtdeDivisores(i));
                printf("Soma: %d",somaDivisores(i));
                printf("\n");
            }
        }
        break;

        case 'B':
        case 'b':
             if (limI<limS)
             {
                for (i=limI;i<=limS;i++)
                {
                    printf("%d - ",i);
                    printf("Soma dos divisores: %d",somaDivisoresNP(i));
                    if (somaDivisoresNP(i)==i)
                    {
                        printf("- eh perfeito\n");
                    }
                    else
                    {
                      printf("- nao eh perfeito\n");
                    }
                    printf("\n");
                }
             }
             else
             {
                for (i=limS;i<=limI;i++)
                {
                    printf("%d - ",i);
                    printf("Soma dos divisores: %d",somaDivisoresNP(i));
                    printf("\n");
                }
             }

        break;
    }

    return 0;
}

int somaDivisores (int num)
{
    int i,soma=0;
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            soma=soma+i;
        }

    }
    return soma;
}

int qtdeDivisores (int num)
{
    int i,contDivisores=0;

    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            contDivisores++;
        }
    }

    return contDivisores;
}

void mostrarDivisores (int num)
{
    int i;
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d  ",i);
        }
    }
}

int somaDivisoresNP (int num)
{
    int i,soma=0;
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            soma=soma+i;
        }

    }
    soma=soma-num;
    return soma;
}
