/*4) Ler uma string e contar os espaços em branco (sucessivos ou não) e armazenar a contagem em um vetor.
Mostrar o vetor. Percorrer o vetor copiando apenas os números que são primos para um novo vetor. Mostrar
o novo vetor (de números primos).
Exemplo: -Eu--gosto---de-programar----em-Linguagem-----de---Programacao-C------
 Eu  gosto   de programar    em Linguagem     de   Programacao C
*/

#include<stdio.h>
#include<string.h>

int main ()
{
    char opcao, texto[100];
    int espacos[50],cont,i,j,k,primos[j],qtde;

    do
    {
        printf("Informe uma string: ");
        fflush(stdin);
        gets(texto);
        printf("\n==== STRING ====\n");
        puts(texto);

        printf("\n==== VETOR ====\n");
        cont=0;
        j=0;
        for (i=0;texto[i]!='\0';i++)
        {
            if (texto[i]== ' ')
            {
                cont++;
            }
            else if (cont != 0)
            {
                espacos[j]=cont;
                j++;
                cont=0;
            }
        }
        if (cont!= 0)
        {
            espacos[j]=cont;
            j++;
            cont=0;
        }
        for(i=0;i<j;i++)
        {
            printf("%d\t",espacos[i]);
        }
        printf("\n");

        printf("\n==== PRIMOS ====\n");
        for(i=0;i<j;i++)
        {
            qtde=0;
            for (k=2;k<espacos[i];k++)
            {
                if (espacos[i]%k==0)
                {
                    qtde++;
                    break;
                }
            }
            if (qtde==0 && espacos[i]!=1)
            {
                primos[i]=espacos[i];
                printf("%d\t",primos[i]);
            }
        }


        printf("\n\nDeseja continuar no programa (S/N)? ");
        fflush(stdin);
        scanf("%c",&opcao);
    }while (opcao=='s'|| opcao=='S');

    return 0;
}
