/*2) Faça um programa para mostrar os primos e calcular a quantidade deles para os números compreendidos
entre o valor ‘x’ (informado pelo usuário) e ‘x+10’, inclusive. Validar a entrada, o usuário deverá fornecer um
número positivo.*/

#include<stdio.h>

int main()

{
    int x, i, j, k, divisores, contDiv;
    char opcao;

    do
    {

        do
        {


            printf("\n\nINFORME UM NUMERO POSITIVO: ");
            scanf("%d", &x);

            if(x <= 0)
            {
                printf("\nNUMERO INVALIDO!!\n\n");
            }

        }while(x<=0);

            for(i=x; i<=x+10; i++) //gerar os numeros para calcular os primos.
                {
                   printf("\n %d ==>", i);
                   contDiv=0;
                   for(j=1; j<=i; j++) //calcular os numeros primos
                   {
                       divisores = 0;
                       for(k=1; k<=j; k++)//contar os divisores.
                       {
                            if(j%k == 0)
                            {
                                divisores++;
                            }
                       }
                       if(divisores ==2)
                       {
                            printf("%d ", j);
                            contDiv++;
                       }
                   }
                   printf("==> %d primo(s). \n", contDiv);
                }


                printf("\n\n\n\n\t\t\t\t\tDeseja reiniciar o programa? (S/s): ");
                fflush(stdin);
                scanf("%c", &opcao);



    }while(opcao=='s' || opcao=='S');



    return 0;
}
