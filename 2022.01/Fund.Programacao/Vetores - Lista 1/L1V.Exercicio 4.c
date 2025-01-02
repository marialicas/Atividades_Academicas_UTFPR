/*4) Gerar valores inteiros aleatórios nos vetores A e B, sendo A com n elementos entre 1 e 20 e B com n
elementos entre 1 e 15. O usuário informa a quantidade de elementos dos vetores, ou seja, o seu tamanho.
Validar para que seja informado um valor positivo o tamanho do vetor. Mostrar os elementos dos vetores A e
B. Construir um vetor C, em que cada elemento de C será 1 quando o elemento de A for maior que o
respectivo elemento em B; será 0 quando o elemento de A for igual ao respectivo elemento em B; e será -1
quando o elemento de A for menor que o respectivo elemento em B. Mostrar os elementos do vetor C.*/

#include<stdio.h>
#include"vetores.h"

int main ()
{
    int tamA,tamB,tamC,limiteA=20,limiteB=15,i,j,k;
    char opcao;

    do
    {
        printf("Informe o tamanho do vetor A: ");
        fflush(stdin);
        scanf("%d",&tamA);

        printf("Informe o tamanho do vetor B: ");
        fflush(stdin);
        scanf("%d",&tamB);

        int vetA[tamA],vetB[tamB];

        printf("\n=== VETOR A ===\n");
        gerarIntDe1aLimite(vetA, tamA,limiteA);
        mostrarVetInt(vetA,tamA);

        printf("\n=== VETOR B ===\n");
        gerarIntDe1aLimite(vetB, tamB,limiteB);
        mostrarVetInt(vetB,tamB);

         if (tamA>tamB)
        {
            tamC=tamA;
        }
        else
        {
            tamC=tamB;
        }

        int vetC[tamC];
        printf("\n=== VETOR C ===\n");
        printf("\Vetor = ");
        if (tamA>tamB)
        {
            for (i=0;i<tamA;i++)
            {
                for (j=0;j<tamB;j++)
                {
                        if (vetA[i]>vetB[j])
                        {
                            vetC[k]=1;
                        }
                        if (vetA[i]<vetB[j])
                        {
                            vetC[k]=-1;
                        }
                        if (vetA[i]==vetB[j])
                        {
                            vetC[k]=0;
                        }
                }
                printf("%d\t", vetC[k]);
             }
        }
        /*else
        {
           for (j=0;j<tamB;j++)
            {
                for (i=0;i<tamA;i++)
                {
                        if (vetB[j]<vetA[i])
                        {
                            vetC[j]=1;
                        }
                        if (vetB[j]>vetA[i])
                        {
                            vetC[j]=-1;
                        }
                        if (vetB[j]== vetA[i])
                        {
                            vetC[j]=0;
                        }
                }
                printf("%d\t", vetC[j]);
             }
        }*/

        printf("\n\nDeseja continuar no programa (S ou N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while(opcao== 's' || opcao=='S');

    return 0;
}
