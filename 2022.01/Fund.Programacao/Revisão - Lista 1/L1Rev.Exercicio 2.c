/*2) Ler uma string e criar uma função que receba a string e retorne quantas palavras a mesma possui. Criar
uma segunda função para contar quantas letras têm em cada palavra da string, armazenando essa contagem
em um vetor passado por parâmetro para a função (esse vetor terá como tamanho o número de palavras da
string). Na sequência, ordenar o vetor e mostrar o vetor. Construir uma matriz de n linhas e duas colunas,
sendo que n representa a quantidade de elementos do vetor (se o elemento ocorrer mais de uma vez,
considerar apenas uma ocorrência). Na segunda coluna da matriz armazenar a quantidade de divisores que o
elemento possui será armazenada. Percorrer a matriz mostrando os elementos das colunas 0 e 1 e
escrevendo “Sim” quando o elemento que está na coluna 0 for primo e “Não” caso contrário.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/

#include<stdio.h>
#include<string.h>
int contPalavras (char str[]);
int contaLetrasDaPalavra (char str []);
void vetLetras (char string[], int vet[], int tam);
void ordenarVetor (int vet[], int tam);
void mostrarVetInt (int vet[],int tam);
int qtdeDivisores (int num);

int main ()
{
    char opcao,texto[100];
    int i;

    do
    {
        printf("Informe uma sting: ");
        fflush(stdin);
        gets(texto);

        printf("\nA string tem %d palavras\n",contPalavras(texto));

        int vet[contaLetrasDaPalavra(texto)], matriz[contaLetrasDaPalavra(texto)][2];

        printf("\n==== VETOR ===\n");
        vetLetras(texto,vet,contaLetrasDaPalavra(texto));

        printf("\n\n==== VETOR ORDENADO ===\n");
        ordenarVetor(vet,contaLetrasDaPalavra(texto));
        mostrarVetInt(vet,contaLetrasDaPalavra(texto));

        printf("\n==== MATRIZ ===\n");
        printf("VALOR\tQTDE DIVISORES\tPRIMO\n");

        for (i=0;i<contaLetrasDaPalavra(texto);i++)
        {
            if (i==0 || vet[i]!=vet[i+1])
            {
                matriz[i][0]=vet[i];
                matriz[i][1]=qtdeDivisores(vet[i]);
                printf("%d\t%d\t\t",matriz[i][0],matriz[i][1]);
                if (matriz[i][1]==2)
                {
                    printf("Sim\n");
                }
                else
                {
                    printf("Nao\n");
                }
            }
        }

        printf("\nDeseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;

}

int contPalavras (char str[])
{
    int cont=0,i=0;
    if (str[i]!=' ')
    {
        cont++;
        i++;
    }

   while (str[i]!='\0')
    {
        if (str[i]==' ' && str[i+1]!='\0' && str[i+1]!=' ')
        {
            cont++;
        }
        i++;
    }

    return cont;
}
int contaLetrasDaPalavra (char str [])
{
    int i=0,contLetras=0;

	while (str[i]!='\0')
	{
		if (str[i]!=' ' && (str[i+1]==' '|| str[i+1]=='\0'))
		{
			contLetras++;
		}
		i++;
	}
	return contLetras;
}
void vetLetras (char string[], int vet[], int tam)
{
	int i=0,j=0, cont=0, k;


		while(string[i]!='\0')
		{
			if (string[i]!=' ')
			{
				cont++;
			}

			else if ((string[i]==' '|| string[i]=='\0') && cont!=0)
			{
				vet[j]=cont;
				cont=0;
				j++;
			}

			i++;
		}
    	if (cont!=0)
	    {
	    	vet[j]=cont;
	 	}


	for (i=0; i<tam;i++)
	{
		printf("%d\t", vet[i]);
	}
}
void ordenarVetor (int vet[], int tam)
{
    int ultimo,i,aux;

    for (ultimo=tam-1;ultimo>0;ultimo--)
    {
        for (i=0;i<ultimo;i++) // comparação
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

    //printf("Vetor = ");
    for (i=0;i<tam;i++)
    {
        printf("%d\t",vet[i]);
    }
    printf("\n");
}
int qtdeDivisores (int num)
{
    int i,contDivisores=0;

    for (i=1;i<=num;i++)
    {
        if (num%i==0)
        {
            contDivisores++;
        }
    }

    return contDivisores;
}
