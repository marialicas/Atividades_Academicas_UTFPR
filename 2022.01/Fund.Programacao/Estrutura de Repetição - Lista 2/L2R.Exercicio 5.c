/*5) Elaborar um programa para automatizar o caixa de uma loja. Ler a quantidade e o valor unitário de cada produto. Calcular o valor
total da compra. Informar esse valor para o usuário e o usuário informa o valor para pagamento. O programa calcula o troco e
informa-o ao usuário em notas de 10, 5, 1 e os centavos. Prosseguir a leitura enquanto a quantidade for maior que zero. Se
informado zero ou valor negativo para a quantidade, não ler o valor unitário.
*/

#include<stdio.h>

int main ()
{
    int qtde,reais10,reais5,real;
    float valorU,valorP,soma=0,valorPg,troco,centavo;

    do
    {
        printf("Informe a quantidade de um produto: ");
        scanf("%d",&qtde);
        if (qtde !=0)
            {
                printf("Informe o valor unitario do produto: ");
                scanf("%f",&valorU);
            }
        valorP=qtde*valorU;
        soma=soma+valorP;
    }while (qtde!=0);
    printf("TOTAL DA COMPRA: R$ %.2f\n",soma);

    printf("\nInforme o valor pago pelo cliente: ");
    scanf("%f",&valorPg);
    troco=valorPg-soma;
    printf("TROCO: %.2f\n", troco);

    reais10=troco/10;
    reais5=((int)troco%10)/5;
    real=(((int)troco%10)%5)/1;
    centavo=troco-(int)troco;

    printf("\nO valor do troco sera devolvido com:\n");
    printf("%d nota (s) de 10 reais.\n",reais10);
    printf("%d nota (s) de 5 reais.\n",reais5);
    printf("%d nota (s) de 1 reais.\n",real);
    printf("e %.2f centavos.\n",centavo);

    return 0;
}
