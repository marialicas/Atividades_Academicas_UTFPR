/*Um viajante de carro fará o trajeto entre duas cidades e ao término da viagem deseja saber:
a) Quantas vezes foi necessário abastecer o carro. (Use a função ceil() da biblioteca math.h para arredondar
o valor para cima)
b) Quantos litros foram consumidos para percorrer a distância indicada.
c) Quantos litros restaram no tanque após a chegada ao destino.
Faça um programa que leia a distância entre as duas cidades, a capacidade do tanque e o consumo médio
do veículo, calcule e mostre as informações solicitadas.*/

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
