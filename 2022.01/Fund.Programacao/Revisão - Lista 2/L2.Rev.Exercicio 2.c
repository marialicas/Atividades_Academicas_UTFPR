/*2) Ler uma string e copiar o valor decimal do código ASCII de cada elemento da string para um vetor. Mostrar
o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Percorrer o vetor ordenado contando, sem repetição, os
números pares e os números ímpares e mostrar a soma total desses valores. Criar um vetor chamado vPares
e um vetor chamado vImpares e copiar, sem repetição, os elementos pares e ímpares para os respectivos
vetores. Mostrar os dois vetores. Criar uma matriz chamada mPares e uma matriz chamada mImpares, sendo
que mPares deverá conter na primeira coluna todos os elementos pares do vetor e na segunda coluna a
quantidade de ocorrências de cada elemento par no vetor e na matriz mImpares fazer o mesmo com os
elementos ímpares. Mostrar as duas matrizes.*/

#include<stdio.h>
#include<string.h>
int ocorreNoVetor (int vet[],int tam,int valor);

int main ()
{
    char opcao,string[100];
    int vet[100],i,tam,j,k,aux,cont,impares,pares;

    do
    {
        i=0,tam=0,cont=0,pares=0,impares=0;
        printf("Informe uma string: ");
        fflush(stdin);
        gets(string);

        printf("\n=== VETOR ===\n");
        while (string[i]!='\0')
        {
            vet[i]=string[i];
            tam++;
            i++;
        }
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);
        }

        printf("\n\n== VETOR ORDENADO== \n");
        for (i=tam-1;i>0;i--)
        {
            for (j=0;j<i;j++)
            {
                if (vet[j]>vet[j+1])
                {
                    aux=vet[j];
                    vet[j]=vet[j+1];
                    vet[j+1]=aux;
                }
            }
        }
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);

                if (vet[i]!= vet[i-1] || i==0)
                {
                    if (vet[i]%2==0)
                    {
                        pares++;
                    }
                    else
                    {
                        impares++;
                    }
                }
        }
        printf("\n\nNumero de pares (sem repeticao): %d\n",pares);
        printf("Numero de impares (sem repeticao): %d\n",impares);

        int vetP[pares],vetI[impares];
        printf("\n=== VETOR PAR ===\n");
        j=0;
        for (i=0;i<tam;i++)
        {
            if (vet[i]%2==0)
            {
                if (vet[i]!= vet[i-1] || i==0)
                {
                    vetP[j]=vet[i];
                    j++;
                }
            }
        }

        for (i=0;i<pares;i++)
        {
            printf("%d\t",vetP[i]);
        }

        printf("\n\n=== VETOR IMPAR ===\n");
        k=0;
        for (i=0;i<tam;i++)
        {
            if (vet[i]%2!=0)
            {
                if (vet[i]!=vet[i-1] || i==0)
                {
                    vetI[k]=vet[i];
                    k++;
                }
            }
        }
        for (i=0;i<impares;i++)
        {
            printf("%d\t",vetI[i]);
        }

        int matrizP[pares][2],matrizI[impares][2];
        printf("\n\n=== MATRIZ PARES ===\n");
        printf("PARES\tOCORRENCIAS\n");
        k=0;
        for (i=0;i<pares;i++)
        {
            matrizP[k][0]=vetP[i];
            matrizP[k][1]=ocorreNoVetor(vet,tam,vetP[i]);
            k++;
        }

        for (i=0;i<pares;i++)
        {
            printf("%d\t%d",matrizP[i][0],matrizP[i][1]);
            printf("\n");
        }

        printf("\n\n=== MATRIZ IMPARES ===\n");
        printf("IMPARES\tOCORRENCIAS\n");
         k=0;
        for (i=0;i<impares;i++)
        {
            matrizI[k][0]=vetI[i];
            matrizI[k][1]=ocorreNoVetor(vet,tam,vetI[i]);
            k++;
        }

        for (i=0;i<impares;i++)
        {
            printf("%d\t%d",matrizI[i][0],matrizI[i][1]);
            printf("\n");
        }



        printf("\n\nDeseja repetir o programa(S/s)? ");
        fflush (stdin);
        scanf("%c",&opcao);

    }while (opcao=='s' || opcao=='S');

    return 0;
}

int ocorreNoVetor (int vet[],int tam,int valor)
{
    int i,cont =0;

    for (i=0;i<tam;i++)
    {
        if (vet[i]==valor)
        {
            cont ++;
        }
    }

    return cont;
}
