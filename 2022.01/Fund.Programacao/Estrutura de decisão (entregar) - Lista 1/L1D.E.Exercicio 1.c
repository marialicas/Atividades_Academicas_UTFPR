/*1) A contribui��o para o INSS � calculada da seguinte forma:
a) Para o sal�rio bruto de at� tr�s sal�rios m�nimos, o desconto do INSS ser� de 8%.
b) Para o sal�rio bruto acima de tr�s sal�rios m�nimos, o desconto do INSS ser� de 10%. Para as
contribui��es maiores que o sal�rio m�nimo, considerar a import�ncia de um sal�rio m�nimo.
Elaborar um programa que receba como entrada o valor do sal�rio m�nimo e o valor do sal�rio bruto, calcule o
INSS e o sal�rio l�quido restante e informe-os*/

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
