void gerarMatriz (int linha,int coluna,int matriz[linha][coluna],int limite)
{
    int i,j;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            matriz[i][j]= rand () % (limite+1);
        }
    }
}

void mostrarMatriz (int linha,int coluna,int matriz[linha][coluna])
{
    int i,j;
    for(i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            printf(" %2d ",matriz[i][j]);
        }
        printf("\n");
    }
}

void mostrarVetor(int vet[],int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
    }
}
