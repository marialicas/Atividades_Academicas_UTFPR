

#include<stdio.h>

int main ()
{
    int i=0, num;
    while (i<=10)
    {
        if (i%2==0)
        {
            printf("%d eh um numero par.\n", i);
        }
        else
        {
            printf("%d eh um numero impar.\n",i);
        }
        i++;
    }
}
