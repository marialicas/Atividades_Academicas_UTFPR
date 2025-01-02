/*1) Ler uma string e contar os espa�os em branco que ocorrem no in�cio, entre as palavras e no final da string,
e armazenar a contagem em um vetor. Mostrar o vetor. Ordenar o vetor. Mostrar o vetor ordenado. Construir
uma matriz de n linhas e duas colunas, sendo que n representa a quantidade de elementos do vetor (se o
elemento ocorrer mais de uma vez, considerar apenas uma ocorr�ncia). Na segunda coluna da matriz
armazenar a quantidade de repeti��es de cada elemento no vetor. Mostrar a matriz.
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------*/

#include<stdio.h>
#include<string.h>
int ocorreNoVetor (int vet[],int tam,int valor);

int main ()
{
    int i,j,k,cont,vet[50],ultimo,aux,qtde,tam;
    char opcao, texto [100];

    do
    {
        cont=0;
        j=0;
        tam=0;
        printf("Informe um texto: ");
        fflush(stdin);
        gets(texto);

        printf("=== VETOR ===\n");
        while (texto[i]!='\0')
        {
            if (texto[i]==' ')
            {
                cont++;
            }
            else if (cont!=0)
            {
                vet[tam]=cont;
                tam++;
                cont=0;
            }
            i++;
        }
        if (cont!=0)
        {
            vet[tam]=cont;
            tam++;
            cont=0;
        }
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);
        }

        printf("\n\n=== VETOR ORDENADO===\n");
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
        for (i=0;i<tam;i++)
        {
            printf("%d\t",vet[i]);
        }

        for (i=0;i<tam;i++)
        {
            if (vet[i]!= vet[i-1] || i==0)
            {
                cont++;
            }
        }

        int matriz[cont][2];
        printf("\n\n====MATRIZ====\n");
        k=0;
        for (i=0;i<tam;i++)
        {
            if (vet[i]!= vet[i-1] || i==0)
            {
                matriz[k][0]=vet[i];
                matriz[k][1]= ocorreNoVetor(vet,tam,vet[i]);
                k++;
            }
        }

        for (i=0;i<cont;i++)
        {
            printf("%d\t%d",matriz[i][0],matriz[i][1]);
            printf("\n");
        }

        printf("\n\nDeseja repetir o programa (S/s)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;
}

int ocorreNoVetor (int vet[],int tam,int valor)
{
    int i,cont =0;

    for (i=0;i<tam;i++)
    {
        if (vet[i]==valor)
        {
            cont ++;
        }
    }

    return cont;
}
