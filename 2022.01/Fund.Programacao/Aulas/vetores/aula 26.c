//tipo nome [tamanho] -- indice=tamanho-1 (pq inicia no 0)

//NOTAS//

#include<stdio.h>
//#define tam = 7 (altera todos os tamanha direto)

int main ()
{
    int i;
    //printf("Informe o tamanho do vetor:") - se quiser que o usuario informe o tamanho do vetor
    float notas [10],soma=0,media;

    for (i=0;i<10;i++)
    {
        printf("informe a nota %d: ",i+1); // i (informa o indice (i+1 - se quiser iniciar no 1))
        scanf("%f",&notas[i]); // notas [i] (le todas as notas)
        soma=soma+notas[i];
    }
    media=soma/10;

    printf("A media das notas eh: %.1f\n",media);


    return 0;
}
