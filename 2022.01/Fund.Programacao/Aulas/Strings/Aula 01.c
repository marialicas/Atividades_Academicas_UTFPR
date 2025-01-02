//gets = "%[^\n]s" para leitura, puts para impressão

#include<stdio.h>
#include<string.h>

int main ()
{
    /*char texto[20];
    printf("Informe uma string: ");
    //scanf("%s",texto);
    gets(texto);
    //printf("String: %s",texto);
    puts(texto);*/

    /*inicialização
    char texto[20]="Teste";
    puts(texto);*/

    char str1[20]= "Linguagem C";
    char str2[20];
    int i,j=0;

    //Fazer strings iguais
    /*for(i=0;str1[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
   // str2[i]='\0';
    puts(str1);
    puts(str2);*/

    /*while (str1[i]!='\0')
    {
        str2[i]=str1[i];
        i++;
    }
    str2[i]='\0';
    puts(str1);
    puts(str2);*/

    //Como imprimir ao contrario

    puts(str1);
    while (str1[i]!='\0') // tamanho da string
    {
        i++;
    }

    printf("Tamanho da string: %d\n",i);

    //i=i-1;
    printf("Tamanho da string: %d\n",i);
    for (i;i>=0;i--) // inverter
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    puts(str2);


    return 0;
}
