/*10)Fazer o programa para o algoritmo representado no fluxograma a seguir:*/

#include<stdio.h>

int main ()
{
    float salarioB,gratificacao,salarioBruto,ir,salarioL;

    printf("informe o salario base (use um ponto (.) para separar os centavos): ");
    scanf("%f", &salarioB);

    printf("informe a gratificacao (use um ponto (.) para separar os centavos): ");
    fflush(stdin);
    scanf("%f",&gratificacao);

    salarioBruto=(float)salarioB+gratificacao;

    if (salarioBruto<1000)
    {
        ir=(float)salarioBruto*0.15;
        salarioL=(float)salarioBruto-ir;
        printf("salario liquido eh igual a: %.2f\n", salarioL);
    }
    else
    {
        ir=(float)salarioBruto*0.2;
        salarioL=(float)salarioBruto-ir;
        printf("salario liquido eh igual a: %.2f\n", salarioL);
    }

    return 0;
}
