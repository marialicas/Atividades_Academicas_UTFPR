/* 5) Ler tr�s valores inteiros diferentes e coloc�-los em ordem crescente. Os valores devem ser apresentados
com uma instru��o: printf("Menor: %d Meio: %d Maior: %d\n", menor, meio, maior);
Sugest�o: Dividir o problema em partes: encontrar o maior, o menor e o do meio separadamente. Armazenar
os valores em vari�vel e mostr�-los com uma �nica instru��o*/

#include<stdio.h>

int main ()
{
    int num,num2,num3,maior,menor,meio;

    printf ("informe o primeiro numero: ");
    scanf("%d",&num);

    printf("informe o segundo numero: ");
    scanf ("%d",&num2);

    printf("informe o terceiro numero: ");
    scanf("%d", &num3);

    if ((num>num2) && (num>num3))
    {
        maior=num;
    }
    else if (num2>num3)
    {
        maior=num2;
    }
    else
    {
        maior=num3;
    }

    if ((num>num3 && num<num2) || (num>num2 && num<num3))
    {
        meio=num;
    }
    else if ((num2>num && num2<num3)|| (num2>num3 && num2<num))
    {
        meio=num2;
    }
    else
    {
        meio=num3;
    }

    if ((num<num2) && (num<num3))
    {
        menor=num;
    }
    else if (num2<num3)
    {
        menor=num2;
    }
    else
    {
        menor=num3;
    }

    printf("maior: %d  meio: %d  menor: %d\n", maior, meio, menor);

    return 0;
}
