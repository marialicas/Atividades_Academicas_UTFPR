#include<stdio.h>
#include "vetores.h"

int main ()
{
    int tam,limite;

    do
    {
      printf("Informe o tamanho do vetor: ");
      scanf("%d",&tam);
    }while (tam<0);

    do
    {
       if (limite>0)
       {
           int vet[tam];
           printf("Informe o limite do vetor: ");
           scanf("%d",&limite);
       gerarIntDe0aLimite(vet, tam, limite);
           mostrarVetInt(vet,tam);
           printf("\n");
           gerarIntDe1aLimite(vet, tam, limite);
           mostrarVetInt(vet,tam);
       }
    }while (limite<0);
}
