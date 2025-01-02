#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerarVetor (int vet[],int tam,int limite);
void mostrarVetor(int vet[],int tam);
void ordenarVetorInteiro(int vetor[], int tam);

int main ()
{
    char opcao;
    int vet[10],limite=10,tam=10,i,j,aux;

    srand(time(NULL));
    do
    {
        printf("===== Vetor Original=====\n");
        gerarVetor(vet,tam,limite);
        mostrarVetor(vet,tam);

        /*printf("\n===Vetor trocado com elementos trocados===\n");
        for (i=0;i<tam;i++)
        {
            for (j=tam-1;j>0;j--)
            {
                if (i==0 && j==tam-1)
                {

                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
                else
                {

                    aux=vet[i+1];
                    vet[i+1]=vet[j-1];
                    vet[j-1]=aux;
                }
            }
        }
        mostrarVetor(vet,tam);*/

        printf("\n===Vetor ordenado ===\n");
        ordenarVetorInteiro(vet,tam);
        mostrarVetor(vet,tam);

        printf("\n===Vetor sem repeticao ===\n");
        int vetS[tam];
        j=0;
        for (i=0;i<tam;i++)
        {
            if (vet[i]!= vet[i-1] || i==0)
            {
                vetS[j]=vet[i];
                j++;
            }
        }
        mostrarVetor(vetS,j);



        printf("\n\nDeseja repetir o programa? (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao== 'S');
}

void gerarVetor (int vet[],int tam,int limite)
{
    int i,j;

    for (i=0;i<tam;i++)
    {
        vet[i]= rand () % (limite+1);
    }
}

void mostrarVetor(int vet[],int tam)
{
    int i;

    for (i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
    }
}

void ordenarVetorInteiro(int vetor[], int tam)
{

    int aux, i, j;

    for(j=tam-1; j>0; j--)
    {
        for(i=0; i<j; i++)
        {
            if(vetor[i] > vetor[i+1])
            {
                aux=vetor[i];
                vetor[i]=vetor[i+1];
                vetor[i+1]=aux;
            }
        }
    }
}

