/*12)Fa�a um programa que solicite ao usu�rio o valor do sal�rio de um funcion�rio e apresente o menu a
seguir e permita ao usu�rio escolher a op��o desejada e mostre o resultado. Verifique a possibilidade de
op��o inv�lida e n�o se preocupe com restri��es, como sal�rio negativo. Use switch - case, if e if - else para a
solu��o.*/

#include<stdio.h>

int main ()
{
   int opcao;
   float salario, imposto, novoSalario;

   printf ("Menu de opcoes:\n 1 - Imposto\n 2 - Novo Salario\n");
   printf("informe a opcao desejada:");
   scanf("%d", &opcao);

   if (opcao==1 || opcao==2)
   {
     printf("informe o salario (use um ponto (.)para separar os centavos):");
     scanf("%f", &salario);
     switch (opcao)
         {
            case 1:
                if (salario<1000)
                {
                    imposto=(float)salario*0.05;
                    printf("o valor do imposto eh de: %.2f\n", imposto);
                }
                else if (salario>=1000 && salario<1500)
                {
                    imposto=(float)salario*0.1;
                    printf("o valor do imposto eh de: %.2f\n", imposto);
                }
                else
                {
                    imposto=(float)salario*0.15;
                    printf("o valor do imposto eh de: %.2f\n", imposto);
                }
                break;

            case 2:
                if (salario<1000)
                {
                    novoSalario=(float)salario+75.00;
                    printf("o novo salario eh de: %.2f\n", novoSalario);
                }
                else if (salario>=1000 && salario<1500)
                {
                   novoSalario=(float)salario+100.00;
                   printf("o novo salario eh de: %.2f\n", novoSalario);
                }
                else
                {
                    novoSalario=(float)salario+150.00;
                   printf("o novo salario eh de: %.2f\n", novoSalario);
                }
                break;
         }
   }
   else
   {
       printf("opcao invalida.\n");
   }

   return 0;
}
