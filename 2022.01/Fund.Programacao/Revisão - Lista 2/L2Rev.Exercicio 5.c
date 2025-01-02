/*5) Fazer um programa que mostra os caracteres repetidos de uma string.*/

#include<stdio.h>
#include<string.h>
void ordenarVetor (char vet[], int tam);

int main ()
{
    char opcao,texto[100],letraR[100];
    int i,cont,j,k;

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);

        printf("\n==== LETRAS REPETIDAS ====\n");
        cont=0;
        for (i=0;texto[i]!='\0';i++)
        {
            cont++;
        }

        k=0;
        for (i=0;i<cont;i++)
        {
            for (j=cont;j>i;j--)
            {
                if (texto[i]==texto[j])
                {
                    letraR[k]=texto[i];
                    k++;
                    break;
                }
            }
        }
        letraR[k]='\0';

        ordenarVetor(letraR,k);
        for (i=0;i<k;i++)
        {
            if (i==0 || letraR[i]!=letraR[i+1])
            {
                printf("%c  ",letraR[i]);
            }
        }

        printf("\n\nDeseja continuar no programa: ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='S' || opcao =='s');
}

void ordenarVetor (char vet[], int tam)
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
