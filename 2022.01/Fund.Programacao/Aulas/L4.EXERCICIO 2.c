/*2) Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.*/

#include<stdio.h>

int main()
{
    int num,i,contPrimos,divisores,j,k;
    char opcao;

    do
    {
        do
        {
            printf("informe um numero positivo: ");
            scanf("%d", &num);
            if (num<0)
            {
                printf("numero invalido.\n");
            }
        }while (num<0);

        for (i=num;i<=num+10;i++) // gerar os numeros para calcular os primos
        {
            printf("\n %d ==>",i); //10==>
            contPrimos=0;
            for (j=1;j<=i;j++)//clcular os numeros primos
            {
                divisores=0;
                for(k=1;k<=j;k++)
                {
                    if(j%k==0)
                    {
                        divisores++;
                    }
                }
                if (divisores==2)
                {
                    printf("%d",j);
                    contPrimos++;
                }
            }
            printf("==> %d primo(s).\n",contPrimos);
        }


        printf("deseja continuar no programa (S/s).\n");
        fflush (stdin);
        scanf("%c",opcao);
    }while (opcao=='s' || opcao=='S');
}
