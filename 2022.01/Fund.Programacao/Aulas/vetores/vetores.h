//- Fun��o para gerar valores aleat�rios inteiros que variem entre 0 e limite em um vetor;

void gerarIntDe0aLimite (int vet[],int tam, int limite)
{
    int i;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%(limite+1);
    }
}

//- Fun��o para gerar valores aleat�rios inteiros que variem entre 1 e limite em um vetor;
void gerarIntDe1aLimite (int vet[],int tam, int limite)
{
    int i;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%limite+1;
    }
}

//- Fun��o para mostrar um vetor de n�meros inteiros.
void mostrarVetInt (int vet[],int tam)
{
    int i;

    printf("Vetor = ");
    for (i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
    }
    printf("\n");
}

// Ordenar Vetor
void ordenarVetor (int vet[], int tam)
{
    int ultimo,i,aux;

    for (ultimo=tam-1;ultimo>0;ultimo--)
    {
        for (i=0;i<ultimo;i++) // compara��o
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

// Vetor sem Repeti��o
void gerarVetorSemRepeticao (int vet[],int tam,int limite)
{
    int i,j;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%limite+1;
        for (j=0;j<i;j++)// percorrer o vetor ate o indice anterior
        {
            if (vet[i]== vet[j]) //verificar se o valor existe;
            {
                i--; // decrementa o i para gerar novo valor
                break;
            }
        }
    }
}

// Verifica se o elemento est� no vetor ou n�o
int maiorOcorrencia (int vet[],int tam)
{
    int i,qtde,j,maior,qtdeMaior;
    maior=vet[0];

    for (i=0;i<tam;i++)
    {
       qtde=0;
       for (j=i;j<tam;j++)
       {
          if (vet[i]==vet[j])
           {
               qtde++;
           }
       }
       if (qtde>qtdeMaior)
       {
           qtdeMaior=qtde;
           maior=vet[i];
       }

    }
}

//menor numero em um vetor
void menorNumero (int vet[],int tam)
{
    int i,j,num,indice;
    for (i=0;i<tam;i++)
        {
            for (j=0;j<tam;j++)
            {
                if (vet[j]>vet[i])
                {
                    num=vet[j];
                    vet[j]=vet[i];
                    num=vet[i];
                    indice=i;
                }
            }
        }
        printf("\nO menor valor eh %d e esta no indice %d\n",num,indice);
}

void (mostrarAoContrario int vet[],int tam)
{
     int i,j,aux;
     
     for (i=0;i<tam;i++)
        {
            for(j=i;j<tam;j++)
            {
                if (vet[i]!=vet[j])
                {
                    aux=vet[i];
                    vet[i]=vet[j];
                    vet[j]=aux;
                }
            }
            printf("%d\t",vet[i]);
        }
}
