/* Considerando que para um cons�rcio sabe-se o n�mero total de presta��es, a quantidade de presta��es
pagas e o valor de cada presta��o (que � fixo). Escreva um programa que determine o valor total j� pago pelo
consorciado e o saldo devedor.*/

#include<stdio.h>

int main ()
{
    float valorPres,saldoTotal,valorPago, saldoDev;
    int num, prestacoesPagas;
    printf("informe o numero total de prestacoes:");
    scanf("%d", &num);

    printf("informe o numero de presta�oes pagas:");
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
