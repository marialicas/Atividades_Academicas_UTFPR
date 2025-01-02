/*3) Ler dois números que representam os limites de um intervalo e ler o incremento. Mostrar os números desse
intervalo de acordo com o incremento indicado e em ordem crescente. O usuário pode informar os valores
que representam os limites do intervalo em ordem crescente ou decrescente. Fazer a média dos ímpares e
divisíveis por 35 do intervalo*/

int main ()
{
    int valorI, valorF,incremento,i=0,imparD35=0, somaImpar=0;
    float media;

    printf("informe o valor inicial: ");
    scanf("%d", &valorI);
    printf("informe o valor final: ");
    scanf("%d", &valorF);
    printf("informe o incremento: ");
    scanf("%d", &incremento);

    for(i=valorI; i<=valorF; i=(i+incremento))
    {
        printf("%d\n",i);
        if (i%2!=00 && i%35==00)
        {
           somaImpar=somaImpar+i;
           imparD35++;
        }
    }
    for(i=valorF; i<=valorI; i=(i+incremento))
    {
        printf("%d\n",i);
        if (i%2!=00 && i%35==00)
        {
           somaImpar=somaImpar+i;
           imparD35++;
        }
    }

    media=somaImpar/imparD35;
    printf("Media dos numeros impares que sao divisiveis por 35 eh: %.2f\n",media);


    return 0;
}
