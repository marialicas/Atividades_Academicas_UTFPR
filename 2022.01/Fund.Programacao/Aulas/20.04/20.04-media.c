#include<stdio.h>

int main ()
{
    float n1, n2, media, notaRec, mediaFinal;

    printf ("informe o numero 1:");
    scanf ("%f", &n1);

    printf ("informe o numero 2:");
    scanf ("%f", &n2);

    media= (n1+n2)/2;


    if (media>=6)
    {
        printf("aprovado.\n");
    }

    else if ((media>=4) && (media<6))
    {
        printf("em recuperacao.\n");

        printf ("informe a nota da recuperacao:");
        scanf ("%f", &notaRec);

        mediaFinal = (media+notaRec)/2;
        printf ("media da recuperacao:%.2f\n", mediaFinal);

        if (mediaFinal >=6)
        {
            printf ("aprovado apos a recuperacao.\n");
        }
        else
        {
            printf ("reprovado apos a recuperacao.\n");
        }

    }

    else // não é necessario colocar (media<6), pois quando nao processa o primeiro, ja processa o segundo
    {
        printf("reprovado.\n");
    }
    return 0;
}
