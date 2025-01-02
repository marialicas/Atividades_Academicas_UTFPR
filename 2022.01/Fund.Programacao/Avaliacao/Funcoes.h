//Primos
int primo (int num)
{
    int i, qtde =0;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            qtde++;
            break;
        }
    }
    return qtde;
}

//quantidade de divisores
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
// Mostrar os divisores de um número

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

//Soma dos divisores que esse número possui.
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
//Máximo Divisor Comum dos dois números.

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

//fatorial
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

//mostrar fatorial
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

//arvore
void arvore (int altura)
{
    int i,j,k;

     for (i=1;i<=altura;i++)
    {
       for (j=altura;j>=i;j--)
       {
           printf(" ");
       }
       for (k=1;k<=(i*2)-1;k++)
        {
            printf("*");
        }
       printf("\n");
    }

    for (j=1;j<=altura/2;j++)
    {
        for (i=1;i<=altura;i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
 }

 //diamante
 void arvore (int altura)
{
    int i,j,k;

     for (i=1;i<=altura;i++)
    {
       for (j=altura;j>=i;j--)
       {
           printf(" ");
       }
       for (k=1;k<=(i*2)-1;k++)
        {
            printf("*");
        }
       printf("\n");
    }

    for (j=1;j<=altura/2;j++)
    {
        for (i=1;i<=altura;i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
 }

//soma impares
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

//numero feliz

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

//potencia
int potencia (int base, int expoente)
{
    int i,j,resultado=1;

    for (i=1;i<=expoente;i++)
    {
        resultado=resultado*base;
    }

    return resultado;
}
// fibonacci
int fibonacci(int n)
{
    int i, fib1 = 1, fib2 = 1, soma=0;
      printf("%d",fib1);
      for (i = 3; i <= n; i = i + 1)
      {
        soma = fib1 + fib2;
        fib1 = fib2;
       fib2 = soma;
       printf(" + %d",fib1);
     }
     return fib2;
}


