/*6) Ler números inteiros. Prosseguir a leitura até ser informado o valor zero que não deve ser considerado nos cálculos. Informar:
a) Quantos valores positivos foram informados.
b) Quantos valores negativos e pares foram informados. Exemplo: Se a entrada for -1, -2, -3, deverá retornar 1, pois tem apenas um
número negativo que é par.
c) A média dos valores divisíveis por 3 informados. Usar a funcão fabs() para converter os valores negativos em positivos. Validar
para não fazer divisão por zero no cálculo da média.*/

#include<stdio.h>

int main ()
{
    int num,contPositivo=0,contNegPar=0,cont=0,contP=0,numP,soma=0;
    float media;

    do
    {
        printf("Informe um numero: ");
        scanf("%d", &num);

        if (num>0)
        {
            contPositivo++;
        }
        if (num<0 && num%2==0)
        {
            contNegPar++;
        }
        if (num>0 || num<0)
        {
            if (num%3==0)
            {
                if (num<0)
                {
                    numP=fabs(num);
                    cont++;
                    soma=soma+numP;
                }
                if (num>0)
                {
                    cont++;
                    soma=soma+num;
                }
            }
        }

    }while (num!=0);

    media=(float)soma/cont;
    printf("\nNumero positivo: %d\n",contPositivo);
    printf("\nNumero negativo que sao pares: %d\n",contNegPar);
    printf("\nA media dos numeros divivsiveis por 3 eh: %.1f\n",media);

    return 0;
}
