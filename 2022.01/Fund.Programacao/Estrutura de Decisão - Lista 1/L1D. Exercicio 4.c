/*4)Faca um programa que leia tras notas de um aluno e calcule a m�dia ponderada, com os pesos 1, 3 e 4,
respectivamente, e:
a) Se a m�dia obtida est� entre 6 a 10 informar que o aluno est� aprovado;
b) Se a m�dia obtida est� entre 4 e 5,9 informar que o aluno est� em recupera��o. Nesse caso, ler a nota de
recupera��o e calcular a m�dia final (que � a m�dia entre a m�dia anual e a nota de recupera��o);
b.1) Se a m�dia final � menor que 5 informar que o aluno est� reprovado ap�s recupera��o;
b.2) Se � igual ou maior que 5 informar que o aluno est� aprovado ap�s recupera��o;
c) Se a m�dia obtida � menor que 4 informar que o aluno est� reprovado antes da recupera��o.*/

#include<stdio.h>

int main ()
{
    float nota1, nota2, nota3,n1Peso,n2Peso,n3Peso,media,notaRec,mediaFinal;

    printf("informe a primeira nota: ");
    scanf ("%f", &nota1);

    printf ("informe a segunda nota: ");
    scanf("%f", &nota2);

    printf ("informe a terceira nota: ");
    scanf("%f", &nota3);

    n1Peso=nota1*1;
    n2Peso=nota2*3;
    n3Peso=nota3*4;
    media=(n1Peso+n2Peso+n3Peso)/3;

    if (media>6)
    {
        printf("o aluno esta aprovado.\n");
    }
    else if ((media>=4)&&(media<=5.9))
    {
        printf ("o aluno esta em recuperacao.\n");

        printf ("informe a nota da recuperacao: ");
        scanf ("%f", &notaRec);

        mediaFinal=(media+notaRec)/2;

        if (mediaFinal<5)
        {
            printf ("o aluno esta reprovado apos a recuperacao.\n");
        }
        else
        {
            printf (" o aluno esta aprovado apos a recuperacao.\n");
        }
    }
    else
    {
        printf ("o aluno esta reprovado antes da recuperacao.\n");
    }

    return 0;
}
