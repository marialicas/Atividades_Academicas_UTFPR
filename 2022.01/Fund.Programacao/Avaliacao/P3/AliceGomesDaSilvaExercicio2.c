#include<stdio.h>
#include<string.h>
void mostrarVetInt (int vet[],int tam);
void ordenarVetor (int vet[], int tam);
long long int fatorial (int num);
void vetSRep (int vet[],int tam);
void mostrarMatriz (int linha, int coluna, int matriz[linha][coluna]);

int main ()
{
    char texto [100];
    int j,k,tam;

    printf("Informe uma string: ");
    gets(texto);

    printf("\n=== VETOR ===\n");
    int i,espaco=0,vet[100];
    for (i=0;texto[i]!='\0';i++)
    {
        if (texto[i]==' ')
        {
            espaco++;
        }
        else if (espaco!=0)
        {
           vet[j]=espaco;
           j++;
           espaco=0;
        }
    }
    if (espaco!=0)
    {
        vet[j]=espaco;
        j++;
        espaco=0;
    }
    for (i=0;i<j;i++)
        {
            printf("%d\t",vet[i]);
        }

    printf("\n=== VETOR ORDENADO===\n");
    ordenarVetor(vet,j);
    mostrarVetInt(vet,j);

    printf("\n=== Matriz ===\n");
    tam=j;
    int vetS[tam],l=0;
    for (i=0;i<tam;i++)
    {
        if (vet[i]!= vet[i-1] || i==0)
        {
            vetS[l]=vet[i];
            l++;
        }
    }
    int linha=l,coluna=2,matriz[linha][coluna],m;
    printf("VALOR\t\tFATORIAL\n");
    for (i=0;i<l;i++)
    {
        //printf("%d\t",vetS[i]);
        for (j=0;j<l;j++)
        {
            for (k=0;k<2;k++)
            {
                matriz[j][0]= vetS[i];
            }
            printf("\n");
        }
    }
    printf("%d\t\t%d",matriz[j][0]);

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
void mostrarVetInt (int vet[],int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
    }
    printf("\n");
}

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
void vetSRep (int vet[],int tam)
{
    int vetS[tam], j=0,i;
    for (i=0;i<tam;i++)
    {
        if (vet[i]!= vet[i-1] || i==0)
        {
            vetS[j]=vet[i];
            j++;
        }
    }
    for (i=0;i<j;i++)
    {
        printf("%d\t",vetS[i]);
    }
}
void mostrarMatriz (int linha, int coluna, int matriz[linha][coluna])
{
    int i,j;

    for (i=0;i<linha;i++)
    {
        for (j=0;j<coluna;j++)
        {
            printf(" %.2d ",matriz[i][j]);
        }
        printf("\n");
    }
}
