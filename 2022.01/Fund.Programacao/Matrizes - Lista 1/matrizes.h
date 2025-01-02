void gerarMatrizIntde1ALim (int linha, int coluna, int matriz [linha] [coluna],int limite)
{
    int i,j;
    srand(time(NULL));

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            matriz[i][j]= rand()% limite+1;
        }
    }
}

void mostrarMatriz (int linha, int coluna, int matriz[linha][coluna])
{
    int i,j;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            printf(" %.2d ",matriz[i][j]);
        }
        printf("\n");
    }
}

int somaDiagonalPrincipal (int linha,int coluna,int matriz[linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            if (i==j)
            {
                soma=soma+matriz[i][j];
            }
        }
    }

    return soma;
}

int somaDiagonalSecundaria (int linha,int coluna, int matriz[linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            if (i+j==coluna-1)
            {
                soma=soma+matriz[i][j];
            }
        }
    }
    return soma;
}

int somaTodosElementos (int linha,int coluna, int matriz[linha][coluna])
{
    int i,j,soma=0;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            soma=soma+matriz[i][j];
        }
    }
    return soma;
}

void maiorNumero (int linha, int coluna, int matriz [linha][coluna])
{
    int i,j,maior;

    maior=matriz[0][0];
    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
           if (matriz[i][j]>maior)
           {
               maior=matriz[i][j];
               linha=i;
               coluna=j;
           }
        }
    }
    printf("\nO maior elemento da matriz eh %d e se encontra na coluna %d da linha %d.\n", maior,coluna,linha);
}

void menorNumero (int linha, int coluna, int matriz [linha][coluna])
{
    int i,j,menor;

    menor=matriz[0][0];
    for (i=0;i<3;i++)
    {
        for (j=0;j<3;j++)
        {
           if (matriz[i][j]<menor)
           {
               menor=matriz[i][j];
               linha=i;
               coluna=j;
           }
        }
    }
    printf("\nO menor elemento da matriz eh %d e se encontra na coluna %d da linha %d.\n", menor,coluna,linha);
}
