/*Um viajante de carro far� o trajeto entre duas cidades e ao t�rmino da viagem deseja saber:
a) Quantas vezes foi necess�rio abastecer o carro. (Use a fun��o ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a dist�ncia indicada.
c) Quantos litros restaram no tanque ap�s a chegada ao destino.
Fa�a um programa que leia a dist�ncia entre as duas cidades, a capacidade do tanque e o consumo m�dio
do ve�culo, calcule e mostre as informa��es solicitadas.*/

#include<stdio.h>
#include<math.h>

int main ()
{
    float distancia, capacidadeTan, consumoMed,a,b,c,aArred;

    printf ("informe a distancia em Km percorrida entre as cidades:");
    scanf ("%f",&distancia);

    printf("informe a capacidade maxima do tanque de combustivel do veiculo:");
    scanf("%f",&capacidadeTan);

    printf("informe o consumo medio em Km/L do veiculo:");
    scanf("%f",&consumoMed);


    a=(distancia/consumoMed)/capacidadeTan;
    b=distancia/consumoMed;
    aArred = ceil(a);
    c=(capacidadeTan*aArred)-b;

    printf("foi necessario abastecer o veiculo %.1f",ceil (a));
    printf(" vezes\n");
    printf("foram necessarios %.1f",b);
    printf(" litros de combustivel para percorrer o trajeto\n");
    printf("restou no tanque de combustivel %.1f",c);
    printf(" litros\n");
}
