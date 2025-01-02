/*1) A contribuição para o INSS é calculada da seguinte forma:
a) Para o salário bruto de até três salários mínimos, o desconto do INSS será de 8%.
b) Para o salário bruto acima de três salários mínimos, o desconto do INSS será de 10%. Para as
contribuições maiores que o salário mínimo, considerar a importância de um salário mínimo.
Elaborar um programa que receba como entrada o valor do salário mínimo e o valor do salário bruto, calcule o
INSS e o salário líquido restante e informe-os*/

int main ()
{
    float salarioM, salarioB,inss, salarioL,salarioM3;

    printf("informe o salario minimo: ");
    scanf("%f", &salarioM);

    printf("informe o valor do salario bruto: ");
    scanf("%f", &salarioB);

    salarioM3=salarioM*3;

    if (salarioB<=salarioM3)
    {
        inss=salarioB*0.08;
        if (inss>salarioM)
        {
            inss=salarioM;
            printf("o valor do INSS eh %.2f", inss);
            printf("o valor do salario liquido eh %.2f\n", salarioB-inss);
        }
        else
        {
           printf("o valor do INSS eh %.2f\n", inss);
           printf("o valor do salario liquido eh %.2f\n", salarioB-inss);
        }
    }
    else
    {
       inss=salarioB*0.1;
        if (inss>salarioM)
        {
            inss=salarioM;
            printf("o valor do INSS eh %.2f\n", inss);
            printf("o valor do salario liquido eh %.2f\n", salarioB-inss);
        }
        else
        {
            printf("o valor do INSS eh %.2f\n", inss);
            printf("o valor do salario liquido eh %.2f\n", salarioB-inss);
        }

    }

    return 0;
}
