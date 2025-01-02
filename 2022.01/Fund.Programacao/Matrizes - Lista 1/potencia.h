int potencia (int base, int expoente)
{
    int i,j,resultado=1;

    for (i=1;i<=expoente;i++)
    {
        resultado=resultado*base;
    }

    return resultado;
}
