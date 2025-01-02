#include<stdio.h>
#include<string.h>

/*1) Ler uma string de até 100 caracteres, contar e exibir a quantidade de cada uma das vogais existentes
nessa string. Armazenar essas quantidades em um vetor. É indispensável armazenar a quantidade no vetor à
medida que a string é percorrida na forma vetVogais[indice]++. Portanto, o vetor que armazena a
quantidade de vogais deve ser inicializado com zero antes de ser utilizado. Mostrar os resultados da seguinte
forma:*/

int main ()
{
    char str[100];
    int i=0,vogais[5];

    printf("Informe um texto com até 100  caracteres: ");
    gets(str);

    for (i=0;i<5;i++)
    {
        vogais[i]=0;
    }
    for (i=0;str[i]!='\0';i++)
    {
        if (str[i]== 'a'|| str[i]=='A')
        {
            vogais[0]++;
        }
        else if (str[i]== 'e'|| str[i]=='E')
        {
            vogais[1]++;
        }
        else if (str[i]== 'i'|| str[i]=='I')
        {
            vogais[2]++;
        }
        else if (str[i]== 'o'|| str[i]=='O')
        {
            vogais[3]++;
        }
        else if (str[i]== 'u'|| str[i]=='U')
        {
            vogais[4]++;
        }
    }

    printf("VOGAL   QUANTIDADE");
    printf("\n=================");
    printf("\nA/a      %d",vogais[0]);
    printf("\nE/e      %d",vogais[1]);
    printf("\nI/i      %d",vogais[2]);
    printf("\nO/o      %d",vogais[3]);
    printf("\nU/u      %d",vogais[4]);



    return 0;
}
