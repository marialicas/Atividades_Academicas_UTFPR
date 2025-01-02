#include<stdio.h>

int main ()
{
    char i,caractere,divisor=0,primos,j,soma=0;

    do
    {
        primos=0;
        i=1;
        printf("\ninforme um caracter: ");
        fflush(stdin);
        scanf("%c",&caractere);

        if (caractere >='1' && caractere<='9')
        {
            for (i=caractere; i>=2; i--)
            {
                printf("%d*",i);
            }
            printf("1\n");
        }
        if (caractere>='a' && caractere<='z' || caractere>='A' && caractere<='Z')
        {
            while(i<=caractere)
            {
                divisor=0;
                for (i=1;i<=caractere;i++)
                {
                    if (caractere%1==0)
                    {
                        divisor++;
                    }
                    if (divisor==2)
                    {
                        printf("%d\t",i);
                        primos++;
                        soma=soma+i;
                    }
                }
                if (primos%6==0)
                {
                    printf("\n");
                }
                i++;
            }

            printf("\nsoma dos primos: %d",soma);
        }

    }while (caractere>='1' && caractere<='9' || caractere>='a' && caractere<='z' || caractere>='A' && caractere<='Z');
}
