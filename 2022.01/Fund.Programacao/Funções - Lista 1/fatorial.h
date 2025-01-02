long long int fatorial (int num)
{
    int j;
    long long int fatoracao=1;

    for (j=1;j<=num;j++)
    {
        fatoracao=fatoracao*j;
    }


    return fatoracao;
}

void mostrarFatorial (int num)
{
    int j;

    if (num == 1)
    {
        printf("1! = 1 = 1");
    }
    else
    {
        printf ("%d! = ",num);
        for (j=num;j>1;j--)
        {
            printf("%d * ",j);
        }
        printf("1 = ");
    }
}
