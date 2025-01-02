//multiplo de 5, entre 5 e 50

#include<stdio.h>

int main ()
{
    int i;

    /*for (i=5;i<=50;i++)  // i=i+5
    {
        if (i%5==0)
        {
            printf("%d\t",i);
        }
    }*/

    for (i=5;i<=50;i=i+5)
    {
        printf("%d\t",i);
    }
}
