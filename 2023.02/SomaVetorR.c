#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int somaVetor (int vetor[], int tamV){
    int soma;
    if(tamV==0){
        return vetor[tamV];
    }
    
    tamV--;
    soma = somaVetor(vetor, tamV) + vetor[tamV+1];

    return soma;
}

int main (){
    int tamV;

    scanf("%d",&tamV);

    int vetor[tamV];

    for(int i=0;i<tamV;i++){
        scanf("%d",&vetor[i]);
    }

    printf("%d", somaVetor(vetor,tamV-1));

    return 0;
}