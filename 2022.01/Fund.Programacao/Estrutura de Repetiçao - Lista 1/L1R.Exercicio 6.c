/*6)Na matemática, o fatorial de um número é o produto de todos os inteiros positivos menores ou iguais ao
número. Exemplo: Fatorial de 5 é 1 * 2 * 3 * 4 * 5 = 120. Elabore um programa que calcule e mostre o fatorial
de um número informado pelo usuário. Validar esse número para que esteja em um intervalo de 1 a 20.
Lembrando que fatorial de 1 = 1 e fatorial de 0 = 1.*/

int main ()
{
    int num,i,j,cont=0;
    long long int fatoracao=1;

    printf("informe um numero (de 1 a 20):");
    scanf("%d", &num);
    if (num>=1 && num<=20)
    {
        printf("%d%c %c ", num,33,61);
        for(i=num;i>=2;i--)
        {
            printf("%d %c ",i,42);
            fatoracao=fatoracao*i;
            cont++;

        }
        printf("1 %c ",61);
        printf("%lld",fatoracao);

    }
    else
    {
        printf ("numero invalido.\n");
    }

    return 0;
}
