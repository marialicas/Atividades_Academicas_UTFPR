//primeiro linha depois colunas

#include<stdio.h>

int main ()
{
    float matriz [3][5];
    int i,j;//i percorre linha e j percorre a coluna

    for (i=0;i<3;i++) //para percorrer as linhas da matriz
    {
        for (j=0;j<5;j++)// para percorrer as colunas
        {
            printf("Informe a nota %d do aluno %d: ",i,j);
            scanf("%f",&matriz[i][j]);
        }
    }

    printf("\n---------- NOTAS ------------\n");

    for(i=0;i<3;i++)
    {
        printf("Aluno %d ==>",i);

        for (j=0;j<5;j++)
        {
            printf(" %.1f\t",matriz [i][j]);
        }
        printf("\n");
    }
    return 0;
}
