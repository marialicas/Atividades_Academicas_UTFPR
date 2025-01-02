/* Considerando que para um consórcio sabe-se o número total de prestações, a quantidade de prestações
pagas e o valor de cada prestação (que é fixo). Escreva um programa que determine o valor total já pago pelo
consorciado e o saldo devedor.*/

#include<stdio.h>

int main ()
{
    float valorPres,saldoTotal,valorPago, saldoDev;
    int num, prestacoesPagas;
    printf("informe o numero total de prestacoes:");
    scanf("%d", &num);

    printf("informe o numero de prestaçoes pagas:");
    scanf("%d", &prestacoesPagas);

    valorPres = (float)valorPres;

    printf("informe o valor de cada prestacao:");
    scanf("%f", &valorPres);

    valorPago = prestacoesPagas*valorPres;
    saldoTotal = num*valorPres;
    saldoDev = saldoTotal-valorPago;

    printf("valor total ja pago:%.2f\n", valorPago);
    printf ("saldo devedor: %.2f\n", saldoDev);
}
