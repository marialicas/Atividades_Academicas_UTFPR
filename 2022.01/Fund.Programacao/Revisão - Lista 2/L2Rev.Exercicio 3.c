/*3) Ler uma string e armazenar em um vetor o valor decimal ASCII apenas dos caracteres que fazem parte do
alfabeto. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Em uma segunda string, armazenar os
caracteres ordenados do vetor e mostrar a string*/

#include<stdio.h>
#include<string.h>
void ordenarVetor (int vet[], int tam);

int main ()
{
    char opcao,string[100];
    int i,j,cont,tam,aux,vet[100];

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(string);

        printf("\nString 1: ");
        puts(string);

        tam=0;
        printf("\n=== VETOR LETRAS ===\n");
        for(i=0;string[i]!='\0';i++)
        {
            if (string[i]>='A' && string[i]<='Z')
            {
                vet[tam]=string[i];
                tam++;
            }
            if (string[i]>='a' && string[i]<='z')
            {
                vet[tam]=string[i];
                tam++;
            }
        }
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);
        }
        printf("\n");

        printf("\n\n== VETOR ORDENADO== \n");
        ordenarVetor(vet,tam);
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);
        }
        printf("\n");

        char str2[tam+1];
        for (i=0;i<tam;i++)
        {
            str2[i]=vet[i];
        }
        str2[i]='\0';

        printf("\nString 2: ");
        puts(str2);

        printf("\nDeseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;

}

void ordenarVetor (int vet[], int tam)
{
    int ultimo,i,aux;

    for (ultimo=tam-1;ultimo>0;ultimo--)
    {
        for (i=0;i<ultimo;i++)
        {
            if (vet[i]>vet[i+1])
                {
                    aux=vet[i];
                    vet[i]=vet[i+1];
                    vet[i+1]=aux;
                }
        }
    }
}
