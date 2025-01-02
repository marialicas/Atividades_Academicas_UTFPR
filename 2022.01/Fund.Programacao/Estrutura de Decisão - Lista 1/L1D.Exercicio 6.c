/*6) Ler o gênero (F ou f para feminino, M ou m para masculino. Para qualquer outro caractere informar que é
inválido e finalizar o programa). Se informado um caractere válido, ler a altura da pessoa e calcular e mostrar
o seu peso ideal, utilizando as seguintes fórmulas:
a) Para homens: (72.7 * h) - 58;
b) Para mulheres: (62.1 * h) - 44.7*/

#include<stdio.h>

int main ()
{
    char genero;
    float altura, peso;

    printf ("informe F para feminino e M para masculino: ");
    scanf ("%c",&genero);

    if (genero == 'm' || genero=='M' || genero=='f'|| genero=='F')
    {
        printf("informe a altura: ");
        scanf ("%f", &altura);
        switch (genero)
        {
            case 'F':
            case 'f':
                peso=(62.1 * altura) - 44.7;
                printf ("o seu peso ideal eh: %.1f\n", peso);
                break;

            case 'M':
            case 'm':
                peso=(72.7 * altura) - 58;
                printf("o seu peso ideal eh: %.1f\n", peso);
                break;
            }
    }
    else
    {
      printf("caracter invalido.\n");
    }

    return 0;
}
