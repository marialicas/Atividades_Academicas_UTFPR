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
/* Mostrar os divisores de um número. Essa função recebe como parâmetro o número e mostra os divisores
de 1 até o número passado como parâmetro da função.*/

void monstrarDivisores (int num) // pq nao tem retorno
{
    int i;
    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            printf("%d\t",i);
        }
    }
}

// Receber, por parâmetro, um número positivo e retornar a soma dos divisores que esse número possui.
int somaDivisores (int num)
{
    int i,soma=0;
    for (i=1;i<=num;i=i+2)
    {
        if (num%i==0)
        {
            soma=soma+i;
        }

    }
    return soma;
}
// Receber, por parâmetro, dois números e retornar o Máximo Divisor Comum dos dois números.
