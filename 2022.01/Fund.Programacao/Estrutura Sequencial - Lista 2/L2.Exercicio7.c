/*  Fazer um programa para ler o salário de uma pessoa, o percentual de aumento e o percentual de
descontos. Os descontos incidem sobre o salário com aumento. Calcular o novo salário e mostrá-lo*/

#include<stdio.h>

int main()
{
    float num, salarioA, salarioD;
    int num2, num3;

    printf("informe o valor do salrio:");
    scanf("%f", &num);

    printf("informe o percentual de aumento:");
    scanf("%d", &num2);

    printf("informe o percentual de desconto");
    scanf("%d", &num3);

    salarioA= num + (num*num2/100);
    salarioD= salarioA - (salarioA*num3/100);

    printf("salario aumentado:%.2f\n", salarioA);
    printf("salario liquido:%.2f\n", salarioD);


}
