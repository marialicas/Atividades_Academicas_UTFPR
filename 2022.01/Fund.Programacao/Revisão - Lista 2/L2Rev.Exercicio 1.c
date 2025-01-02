/*1) Gerar um vetor que n�o contenha n�meros repetidos, com 10 elementos aleat�rios entre 0 e 50. Utilizar
uma fun��o para verificar se cada elemento do vetor � ou n�o um n�mero primo. Essa fun��o retorna 0 para
indicar que o n�mero � primo ou 1 para indicar que o n�mero n�o � primo. Criar uma matriz 10x3 onde a
primeira coluna vai armazenar o �ndice do vetor, a segunda coluna vai armazenar o elemento do vetor e a
terceira coluna vai armazenar 0 se o elemento do vetor for um n�mero primo ou 1 caso o elemento do vetor
n�o seja um n�mero primo. Fazer a m�dia dos n�meros primos encontrados no vetor. A sa�da do programa
deve ser apresentada como no exemplo a seguir*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void gerarVetorSemRepeticao (int vet[],int tam,int lim);
void mostrarVetores (int vet[],int tam);
int primos (int num);

int main ()
{
    int vet[10],limite=50,i,j,matriz[10][3],cont,soma,primosV[10];
    char opcao;

    do
    {
        srand(time(NULL));
        printf("=== VETOR ===\n");
        gerarVetorSemRepeticao(vet,10,limite);
        mostrarVetores(vet,10);

        soma=0;
        cont=0;
        for (i=0;i<10;i++)
        {
            primosV[i]= primos(vet[i]);
            if (primosV[i]==0)
            {
                cont++;
                soma=soma+vet[i];
            }
        }

        printf("\nINDICE\tNUMERO\tPRIMO");
        for (i=0;i<10;i++)
        {
            for (j=0;j<3;j++)
            {
                matriz[i][0]=i;
                matriz[i][1]=vet[i];
                matriz[i][2]=primosV[i];
            }
            printf("\n%d\t%d\t%d",matriz[i][0],matriz[i][1],matriz[i][2]);
        }
        printf("\n");
        printf("\nMedia dos numeros primos:%.1f\n",(float)soma/cont);

        printf("\nDeseja continuar no programa (S/N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;

}

void gerarVetorSemRepeticao (int vet[],int tam,int limite)
{
    int i,j;
    for (i=0;i<10;i++)
        {
            vet[i]= rand () % limite+1;
            for (j=0;j<i;j++)
            {
                if (vet[i]==vet[j])
                {
                    i--;
                    break;
                }
            }
        }
}

void mostrarVetores (int vet[],int tam)
{
    int i;
    for (i=0;i<10;i++)
    {
        printf("%d\t",vet[i]);
    }
    printf("\n");
}

int primos (int num)
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

