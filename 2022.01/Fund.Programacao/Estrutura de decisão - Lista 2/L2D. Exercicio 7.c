/*7)Faça um programa que receba o salário de um funcionário e o código correspondente ao seu cargo atual e mostre o
cargo, o valor do aumento e seu novo salário. Os cargos estão na tabela a seguir:*/

#include<stdio.h>

int main ()
{
    int cargo,cod1,cod2,cod3,cod4,cod5;
    float salario,aumento,novoSalario;

    printf("Codigo      Cargo        Percentual\n");
    printf("  1     Escriturario      50%c\n", 37);
    printf("  2     Secretario        35%c\n", 37);
    printf("  3     Caixa             20%c\n", 37);
    printf("  4     Gerente           10%c\n", 37);
    printf("  5     Diretor           Nao tem aumento\n\n");

    printf("informe o salario do funcionario:");
    scanf("%f", &salario);

    printf("informe o cardo do funcionario (1,2,3,4 ou 5): ");
    fflush(stdin);
    scanf ("%d",&cargo);

    cod1=1;
    cod2=2;
    cod3=3;
    cod4=4;
    cod5=5;

    if (cargo==1)
    {
        printf("\no cargo eh Escrituario.\n");
        aumento=(float)salario*0.5;
        printf ("o valor do aumento eh: %.2f\n", aumento);
        printf("O novo salario eh %.2f\n", salario+aumento);
    }
    if (cargo==2)
    {
        printf("\no cargo eh Secretario.\n");
        aumento=(float)salario*0.35;
        printf ("o valor do aumento eh: %.2f\n", aumento);
        printf("O novo salario eh %.2f\n", salario+aumento);
    }
    if (cargo==3)
    {
        printf("\no cargo eh Caixa.\n");
        aumento=(float)salario*0.2;
        printf ("o valor do aumento eh: %.2f\n", aumento);
        printf("O novo salario eh %.2f\n", salario+aumento);
    }
    if (cargo==4)
    {
        printf("\no cargo eh Gerente.\n");
        aumento=(float)salario*0.1;
        printf ("o valor do aumento eh: %.2f\n", aumento);
        printf("O novo salario eh %.2f\n", salario+aumento);
    }
    if (cargo==5)
    {
        printf("\no cargo eh Diretor.\n");
        aumento=(float)salario*0;
        printf ("o valor do aumento eh: %.2f\n", aumento);
        printf("O novo salario eh %.2f\n", salario+aumento);
    }

    return 0;
}
