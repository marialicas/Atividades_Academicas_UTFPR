/*7) Calcular o imposto de renda de uma pessoa de acordo com a seguinte tabela:
Se informado valor negativo, não realizar o cálculo e informar o usuário.*/

#include<stdio.h>

int main ()
{
    double rendaA,imposto;

    printf("informe a renda anual (use um ponto (.) para separar os centavos): ");
    scanf("%lf", &rendaA);

    if (rendaA>0)
    {
      if (rendaA<=10000)
      {
          printf("o valor a ser pago no imposto de renda eh 0.\n");
      }
      else if (rendaA>10000 && rendaA<=25000)
      {
         imposto=rendaA*0.1;
         printf ("o imposto de renda eh igual a %.3lf reais\n", imposto);
      }
      else
      {
         imposto=rendaA*0.25;
         printf ("o imposto de renda eh igual a %.3lf reais\n", imposto);
      }
    }
    else
    {
        printf("valor invalido");
    }

    return 0;
}
