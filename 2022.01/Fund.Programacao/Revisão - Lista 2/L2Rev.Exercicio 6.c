/*6) Fazer um programa que retira todos os caracteres repetidos de uma string.*/

#include<stdio.h>
#include<string.h>
void ordenarVetor (char vet[], int tam);

int main ()
{
    char opcao,texto[100],letraR[100];
    int i,cont,k,j,l,h,igual;

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);

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
                }
            }
        }
        letraR[k]='\0';

        ordenarVetor(letraR,k);
        char str[k];

        h=0;
        for (i=0;i<k;i++)
        {
            if (i==0 || letraR[i]!=letraR[i+1])
            {
                str[h]=letraR[i];
                h++;
            }
        }
        str[h]='\0';

        for (i=0;i<cont;i++)
        {
            for (j=0;j<h;j++)
            {
                if (texto[i]==str[j])
                {
                    for (k=i;k<cont;k++)
                    {
                        texto[k]=texto[k+1];
                    }
                    cont--;
                    i--;
                }
            }
        }
        printf("\nString sem os carscteres repetidos: %s\n",texto);


        printf("\nDeseja continuar no programa: ");
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
