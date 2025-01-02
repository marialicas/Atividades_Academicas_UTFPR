#include<stdio.h>

int main ()
{
    int num, num2, opcao;

    printf("informe um valor inteiro: ");
    scanf("%d",&num);

    printf("informe outro valor inteiro: ");
    scanf("%d",&num2);

    printf("1-soma\n");
    printf("2-subtrair\n");
    printf("3-multiplicar\n");
    printf("4-dividir\n");

    printf("escolha uma opcao:");
    scanf("%d",&opcao);

    switch (opcao)
    {
        case 1:
            printf ("%d + %d = %d", num, num2, (num+num2)); // ou apenas (num+num2)
            break;
        case 2:
            printf ("%d - %d = %d",num,num2, (num-num2));
            break;
        case 3:
            printf("%d * %d = %d",num,num2, (num*num2));
            break;
        case 4:
            printf("%d / %d = %d",num,num2, (num/num2));
            break;
        default:
            printf("numero invalido\n");
            break;

    }

    return 0;
}
