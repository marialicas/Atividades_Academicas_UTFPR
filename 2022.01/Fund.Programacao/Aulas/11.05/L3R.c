/*1) Ler um n�mero positivo, validar a entrada repetindo a leitura at� que seja informado um n�mero que
atende essa condi��o. Esse n�mero representa a quantidade de n�meros primos a serem mostrados.*/

#include<stdio.h>

int main ()
{
    char opcao;
    int quantidade, contPrimo,contDivisores, i,j;

    do // repeticao do programa
    {   i=2; // primeiro numero primo (coloquei aq pq sempre que repetir o programa vai inicializar com 2);
        contPrimo=0;
        do // valida��o da entrada da qunatodade de numeros primos
        {
            printf("digite a quantidade de numeros primos que deseja mostrar: ");
            scanf("%d", &quantidade);
            if (quantidade<0)
            {
                printf("numero invalido.\n");
            }
        }while (quantidade<0);

        do // calcular os numeros primos ate q o contador de primos seja menor que a quantidade informada pelo usuario;
        {
            contDivisores=0; //
            for (j=1; j<=i;j++) // calcula os divisores do numero
            {
                if (i%j==0)
                {
                    contDivisores++;
                }
            }
            if (contDivisores==2)
            {
                printf("%d\t", i); //eh primo, imprimi o numero
                contPrimo++; // e conta
            }
            i++;
        }while (contPrimo<quantidade); //1<26

        printf("\ndeseja digitar outro numero (S/s ou N/n): ");
        fflush(stdin);
        scanf("%c", &opcao);
    }while (opcao == 'S' || opcao == 's');

    return 0;
}
