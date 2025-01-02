/*Receber, por par�metro, um n�mero inteiro e positivo e retornar a quantidade de divisores que esse
n�mero possui.*/
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
/* Mostrar os divisores de um n�mero. Essa fun��o recebe como par�metro o n�mero e mostra os divisores
de 1 at� o n�mero passado como par�metro da fun��o.*/

void mostrarDivisores (int num) // pq nao tem retorno
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

// Receber, por par�metro, um n�mero positivo e retornar a soma dos divisores que esse n�mero possui.
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
// Receber, por par�metro, dois n�meros e retornar o M�ximo Divisor Comum dos dois n�meros.

int MaxDivisorComum (int num, int num2)
{
    int MDC,resto;

    if (num2>num)
    {
        if (num2%num==0)
        {
            MDC=num;
        }
        else
        {
            MDC=num2%num;
        }
    }
    else
    {
        if (num%num2==0)
        {
            MDC=num2;
        }
        else
        {
            MDC=num%num2;
        }
    }


    return MDC;
}
