//vetor multiplicado pelo indicce//

#include<stdio.h>

int main ()
{
    int vetA[10], vetB[10],i;

    for (i=0;i<10;i++)
    {
        printf("Informe o valor para a posicao %d do vetor: ",i);
        scanf("%d",&vetA[i]);
    }
    for (i=0;i<10;i++)
    {
        vetB[i]=vetA[i]*i;
    }
    for (i=0;i<10;i++)
    {
        //printf("%d\n",vetB[i]);
        printf("%d*%d = %d\n",vetA[1],i, vetB[i]);
    }
    return 0;
}
