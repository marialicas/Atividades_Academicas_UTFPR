/*Resolva as seguintes express�es matem�ticas. X e Y s�o valores fornecidos pelo usu�rio. Calcule e
mostre o resultado de cada express�o. Reutilize vari�veis, ou seja, ter� apenas uma vari�vel para armazenar
os resultados do tipo int e outra para armazenar o resultado do tipo float. Faz a primeira opera��o e j�
imprime o resultado e assim para todas as demais opera��es. Aten��o para os resultados que podem ser
valores float e para a prioridade dos operadores. Primeiro deve-se linearizar as express�es e depois
implementar o algoritmo para calcular os resultados.*/

#include<stdio.h>

int main ()
{
    int x,y,e1,e2,e3;
    float a,b,c,d;

    printf ("informe o valor para X:");
    scanf ("%d", &x);

    printf("informe o valor para y");
    scanf("%d",&y);

    a=(((float)x+y)/y)*(x*x);
    printf ("a eh igual a:%f\n",a);

    b=((float)x+y)/(x-y);
    printf ("b eh igual a:%f\n",b);

    c=(((float)x*x)+(y*y*y))/2;
    printf ("c eh igual a:%f\n",c);

    d=((float)x*x*x)/(x*x);
    printf ("d eh igual a:%f\n",d);

    e1=x%y;
    printf ("o resto da divisao de x por y eh:%d\n",e1);

    e2=x%3;
    printf ("o resto da divisao de x por 3 eh:%d\n",e2);

    e3=y%5;
    printf ("o resto da divisao de y por 5 eh:%d\n",e3);
}
