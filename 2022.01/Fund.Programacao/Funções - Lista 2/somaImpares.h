char somaImpares (int num)
{
    int i,soma=0;
    char resultado='n';

    for (i=1;i<=num;i=(i+2))
    {
        printf("%d ",i);
        soma=soma+i;

        if (soma==num)
        {
            break;
        }
    }
    if (soma==num)
    {
        resultado='s';
    }

    return resultado;
}
