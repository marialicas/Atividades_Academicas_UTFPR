/*1) Ler um número positivo, validar a entrada repetindo a leitura até que seja informado um número que
atende essa condição. Esse número representa a quantidade de números primos a serem mostrados.*/

#include<stdio.h>

int main ()
{
    char opcao;
    int quantidade, contPrimo,contDivisores, i,j;

    do // repeticao do programa
    {   i=2; // primeiro numero primo (coloquei aq pq sempre que repetir o programa vai inicializar com 2);
        contPrimo=0;
        do // validação da entrada da qunatodade de numeros primos
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
