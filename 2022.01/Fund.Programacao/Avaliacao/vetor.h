//sem repeticao = if (vet[i]!= vet[i-1] || i==0)
//- Função para gerar valores aleatórios inteiros que variem entre 0 e limite em um vetor;
void gerarIntDe0aLimite (int vet[],int tam, int limite)
{
    int i;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%(limite+1);
    }
}

//- Função para gerar valores aleatórios inteiros que variem entre 1 e limite em um vetor;
void gerarIntDe1aLimite (int vet[],int tam, int limite)
{
    int i;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%limite+1;
    }
}

//- Função para mostrar um vetor de números inteiros.
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

// Vetor sem Repetição
void gerarVetorSemRepeticao (int vet[],int tam,int limite)
{
    int i,j;
    srand(time(NULL));

    for (i=0;i<tam;i++)
    {
        vet[i]= rand()%limite+1;
        for (j=0;j<i;j++)
        {
            if (vet[i]== vet[j])
            {
                i--;
                break;
            }
        }
    }
}

// Verifica se o elemento está no vetor ou não
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

    return maior;
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

//Maior Número
void maiorNumero (int vet[],int tam)
{
    int i,j,num,indice;
    for (i=0;i<tam;i++)
        {
            for (j=0;j<tam;j++)
            {
                if (vet[j]<vet[i])
                {
                    num=vet[j];
                    vet[j]=vet[i];
                    num=vet[i];
                    indice=i;
                }
            }
        }
        printf("\nO maior valor eh %d e esta no indice %d\n",num,indice);
}

// vetor par
void vetorPar (int vet[])
{
    int i;

    for (i=0;i<15;i++)
    {
        if (vet[i]%2==0)
        {
            printf("%d\t",vet[i]);
        }
    }
}

// vetor impar
void vetorImpar (int vet[])
{
    int i;

    for (i=0;i<15;i++)
    {
        if (vet[i]%2!=0)
        {
            printf("%d\t",vet[i]);
        }
    }
}

//ao contrario
void aoContrario (int vet[]);
{
    int i;
    for (i=9;i>=0;i--)
    {
        printf("%d\t", vet[i]);
    }
}

//interseção
void intersecao (int vetA[],int vetB[])
{
    int i,j,k;
    for (i=0;i<10;i++)
    {
        for (j=0;j<10;j++)
        {
            if (vetA[i]==vetB[j])
            {
                vet[k]=vetA[i];
                printf("%d\t",vet[k]);
            }
        }
    }
}

//Gerar um novo vetor com os dados do primeiro na seguinte ordem: o primeiro número do vetor deve ser trocado com o último, o segundo número deve ser trocado com o penúltimo
void vetTrocado (int vet[],int tam)
{
    int i,j=0;
    for(i=tam-1; i>=0; i--)
    {
        vetorT[j]=vetor[i];
        j++;
    }
    for(i=0; i<tam; i++)
    {
        printf("%d ", vetorT[i]);
    }
}

// vetor sem repetido
void vetSRep (int vet[],int tam);
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
