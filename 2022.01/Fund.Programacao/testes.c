#include <stdio.h>
void contVeC (char str []);
void letrasR (char str[],int tam);

int main ()
{
    char str[20]="bala de coco";
    puts(str);
    contVeC(str);
    letrasR(str,4);

}
void contVeC (char str [])
{
    int vogais = 0, consoantes = 0, i;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vogais++;

        else if (ch == ' ')
            continue;

        else
            consoantes++;
    }
    printf("\nVogais: %d", vogais);
    printf("\nConsonantes: %d", consoantes);
}



/*int fib(int n) ;

int main(void)
{
     int n;
     printf("Informe um numero: ");
     scanf("%d", &n);
     printf(" = %d\n", fib(n));
    return 0;
}

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
//int main ()
//{
    /*printf("BASE\t EXPOENTE\t RESULTADO\n");
    for (i=0;i<10;i++)
    {
        for (j=0;j<2;j++)
        {
            base[i]=matriz[i][0];
            expoente[i]=matriz[i][1];
            //resultado[i]=pow(base[i],expoente[i]);
            if (expoente[i]==1)
                {
                    resultado[i]=base[i];
                }

            for (k=0;k<expoente[i]-1;k++)
            {
                if (k==0)
                {
                   resultado[i]=base[i]*base[i];
                }
                else
                {
                   resultado[i]=resultado[i]*base[i];
                }

            }
        }
        printf("%d\t %d\t\t %d\n",base[i],expoente[i],resultado[i]);
    }*/
//}*/
