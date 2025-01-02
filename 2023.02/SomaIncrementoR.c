#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
int SomaIncremento(int num1, int num2){
    if(num2==0){
        return num1;
    }
    else{
        num1++;
        num2--; 
        return SomaIncremento(num1,num2);  
    } 
}

int main(){
    int qtdeLeituras, num1,num2;

    scanf("%d", &qtdeLeituras);

    for(int i=0;i<qtdeLeituras;i++){
        scanf("%d %d", &num1, &num2);
        printf("%d\n",SomaIncremento(num1,num2));
    }
    return 0;
}

