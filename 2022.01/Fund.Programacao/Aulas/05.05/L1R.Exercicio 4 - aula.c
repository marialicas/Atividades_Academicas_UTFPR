/*4)Fazer um programa que faça o levantamento dos candidatos que se inscreveram para vagas em uma
empresa. Considerando que para cada candidato, a empresa tenha obtido as seguintes informações:
- Idade, - Nacionalidade (B - Brasileiro ou E - Estrangeiro), - Possui curso superior (S - Sim ou N - Não)
Determinar:a) A quantidade de brasileiros., b) A quantidade de estrangeiros.,
c) A idade média dos brasileiros sem curso superior.
d) A menor idade entre os estrangeiros com curso superior.
Estabelecer uma condição para finalizar a entrada de dados do programa. Por exemplo, igual a 0 ou idade
negativa. Se a idade for igual a 0 ou negativa, não ler as informações de nacionalidade e se possui curso
superior, e sair do programa.*/

#include<stdio.h>

int main ()
{
   int i,idade,somaIdade=0,qtdeB=0,qtdeE=0,soma=0,brasileiroSCurso=0, menorIdade=0;
   char nacionalidade,cursoS;
   float media;

   do
   {
       printf ("informe a idade: ");
       scanf ("%d",&idade);

       if (idade>0)
       {
            printf ("informe a nacionalidade - Brasileiro (B) ou Estrangeiro (E): ");
            fflush(stdin);
            scanf ("%c",&nacionalidade);

            if (nacionalidade=='b'||nacionalidade=='B' || nacionalidade=='e' || nacionalidade=='E')
            {
                printf ("Possui curso superior - Sim (S) ou Nao (N) ");
                fflush(stdin);
                scanf ("%c",&cursoS);
                if(cursoS == 'n' || cursoS =='N' || cursoS=='S' || cursoS=='s')
                {
                    if (nacionalidade=='b' || nacionalidade=='B')
                    {
                       qtdeB++;
                       if (cursoS=='n' || cursoS=='N')
                       {
                           somaIdade=somaIdade+idade;
                           brasileiroSCurso++;
                       }
                    }
                else
                {
                    qtdeE++;
                    if (cursoS=='s'|| cursoS=='S' )
                    {
                        if(menorIdade==0)
                        {
                            menorIdade=idade; //priemira interação, inicializa a variavel menor idade com o valor da idade informada pelo usuario
                        }
                        else
                        {
                            if(idade<menorIdade)
                            {
                                menorIdade=idade;
                            }
                        }
                    }
                }
                }
            }
            else
            {
                printf("caracter invalido");
            }
       }

    i++;
    }while (idade>0);

        printf("Quantidade de brasileiros: %d\n",qtdeB);
        printf("Quantidade de estrangeiros: %d\n",qtdeE);
        if (brasileiroSCurso>0)
        {
            media=somaIdade/(float)brasileiroSCurso;
            printf("Media das idades dos brasileiros sem curso superior %.2f\n", media);
        }
        printf("Menor idade dos estrangeiros com curso superio: %d\n", menorIdade);



    return 0;
}
