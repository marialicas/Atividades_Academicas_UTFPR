#include<stdio.h>
#include<string.h>
#include"matriz.h"
int qtdePalavras (char texto []);
int qtdeConsoantes (char string[]);
int naoRepete (int vet[],int tam);
void ordenarVetorInteiro(int vetor[], int tam);

int main ()
{
    char opcao,string[101];
    int i,j,consoante,vet[101];
    do
    {
        printf("Informe uma string de ate 100 caracteres: ");
        fflush(stdin);
        gets(string);

        while (string[i]!='\0' && string[i]!=' ')
        {
            vet[i]=string[i];
            i++;
        }
        ordenarVetorInteiro(vet,i);

        printf("\nQuantidade de consoantes: %d\n",qtdeConsoantes(string));
        printf("\nQuantidade de palavras: %d\n",qtdePalavras(string));
        printf("\nQuantidade de caracteres que nao se repetem: %d\n",naoRepete(vet,i));

        printf("\nDeseja repetir o programa? (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s' || opcao== 'S');
}

int qtdeConsoantes (char string[])
{
    int i=0,consoante=0, j=0;
    char vetV[11]="AEIOUaeiou";
        while (string[i]!='\0')
        {
            if (string[i]>='A' && string[i]<='Z' || string[i]>='a' && string[i]<='z' && string[i]!=' ');
            {
                while(vetV[j]!='\0')
                {
                    if (string[i]!= vetV[j]);
                    {
                        consoante++;
                    }
                    j++;
                }

            }
            i++;
        }

        return consoante;
}

int qtdePalavras (char texto [])
{
    int i=0,cont=0;
    if (texto[i]!=' ')
    {
        cont++;
        i++;
    }

   while (texto[i]!='\0')
    {
        if (texto[i]==' ' && texto[i+1]!='\0' && texto[i+1]!=' ')
        {
            cont++;
        }
        i++;
    }

    return cont;
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

int naoRepete (int vet[],int tam)
{
   int vetS[tam],j=0,i;
    for (i=0;i<tam;i++)
    {
        if (vet[i]!= vet[i-1] || i==0)
        {
            vetS[j]=vet[i];
            j++;
        }
    }

    return j;
}
