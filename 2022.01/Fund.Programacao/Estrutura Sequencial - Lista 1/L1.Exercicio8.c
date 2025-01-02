/*O custo ao consumidor de um carro novo é a soma do custo de fábrica com a percentagem do distribuidor
e a percentagem dos impostos (ambas aplicadas sobre o custo de fábrica). Escrever um programa para, a
partir do custo de fábrica do carro, calcular e mostrar o custo ao consumidor.*/

#include<stdio.h>

int main ()
{
   float custoFab, custoAut, custoAut2,porcentagemDist, porcentagemImp;

   printf ("informe o custo do automovel:");
   scanf ("%f",&custoFab);

   printf ("informe a porcentagem do distribuidor:");
   scanf ("%f",&porcentagemDist);

   printf ("informe a porcentagem dos impostos:");
   scanf ("%f",&porcentagemImp);

   custoAut= custoFab + (custoFab*porcentagemDist/100);
   custoAut2 = custoAut + (custoFab*porcentagemImp/100);

   printf ("o custo do veiculo ao consumidor eh: %.2f\n",custoAut2);
}
