#include<stdio.h>
void gerarIntDeLimIaLimS (int vet[],int tam,int limiteS,int limiteI);
void mostrarVetInt (int vet[],int tam);
void ordenarVetor (int vet[], int tam);
void fibonacci(int n);

int main ()
{
    int tam,limS,limI,i,cont=0,j;

    do
    {
        printf("Informe o tamanho do vetor: ");
        scanf("%d",&tam);

        printf("Informe o limite Inferior: ");
        scanf("%d",&limI);

        printf("Informe o limite Superior: ");
        scanf("%d",&limS);

    } while ((limS-limI)<=tam);

    int vet[tam];
    printf("\n=== VETOR ===\n");
    gerarIntDeLimIaLimS(vet,tam,limS,limI);
    mostrarVetInt(vet,tam);

    printf("\n=== VETOR ORDENADO ===\n");
    ordenarVetor(vet,tam);
    mostrarVetInt(vet,tam);
    printf("\n=== VETOR DE PRIMOS ===\n");
    for (i=0;i<tam;i++)
    {
        if (primo(vet[i])==0)
        {
            cont++;
        }

    }
    int vetP[cont];
    for (i=0;i<tam;i++)
    {
        if (primo(vet[i])==0)
        {
            vetP[cont]=vet[i];
        }
    }
    mostrarVetInt(vetP,cont);

    printf("\n=== FIBONACCI===\n");
    for (i=0;i<=cont;i++)
    {
        printf("%d =>",i);
        fibonacci(i);
    }
    printf("\n");

    return 0;
}

void gerarIntDeLimIaLimS (int vet[],int tam,int limiteS,int limiteI)
{
    int i;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()% limiteS+limiteI;
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

int primo (int num)
{
    int i, qtde =0;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            qtde++;
            break;
        }
    }
    return qtde;
}

void fibonacci(int n)
{
    int i, num1 = 1, num2 = 1, soma=0;
      printf("%d",num1);
      for (i = 3; i <= n; i = i + 1)
      {
        soma = num1 + num2;
        num1 = num2;
       num2 = soma;
       printf(" %d",num1);
     }
}
