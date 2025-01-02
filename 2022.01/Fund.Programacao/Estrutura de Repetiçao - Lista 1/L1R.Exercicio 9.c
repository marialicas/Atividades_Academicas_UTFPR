/*9) Ler números inteiros informados pelo usuário até ser informado um valor negativo. Dentre os números
informados, exceto o valor negativo que é a condição de saída:
a) Contar a quantidade de números menores que 10 ou maiores que 100.
b) Contar a quantidade de números ímpares.
c) Contar a quantidade de números divisíveis por 10.
d) Contar a quantidade de números entre 10 e 100.
e) Contar quantas vezes é informado o número 30.
f) Contar quantas vezes é informado um número diferente de 10, de 20 e de 30*/

#include<stdio.h>

int main ()
{
    int num,qtde=0,qtdeImpares=0,qtdeD10=0,qtde10E100=0,qtdeN30=0,qtdeDif=0;

    do
    {
        printf("Informe um numero (negativo para finalzar): ");
        scanf("%d", &num);

        if (num>=0)
        {
        if (num<10 || num>100)
        {
            qtde++;
        }
        if (num%2!=0)
        {
            qtdeImpares++;
        }
        if (num%10==0)
        {
            qtdeD10++;
        }
        if (num>=10 && num<=100)
        {
            qtde10E100++;
        }
        if (num==30)
        {
            qtdeN30++;
        }
        if (num!=10 && num!=20 && num!=30)
        {
            qtdeDif++;
        }
        }

    } while (num>=0);


    printf("\nA quantidade de numeros menores que 10 ou maiores de 100: %d\n",qtde);
    printf("A quantiddae de numeros impares: %d\n",qtdeImpares);
    printf("A qauntidade de numeros divisiveis por 10 eh: %d\n",qtdeD10);
    printf("A quantidade de numeros entre 10 e 100: %d\n", qtde10E100);
    printf("O numero de vezes que foi informado o numero 30: %d\n",qtdeN30);
    printf("A quantidade de vezes que foi informado um numero diferente de 10, 20 e 30: %d\n",qtdeDif);

    return 0;
}
