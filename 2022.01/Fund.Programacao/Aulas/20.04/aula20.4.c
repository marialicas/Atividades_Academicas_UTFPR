

#include<stdio.h>

int main()
{
    int x;

    printf("informe um valor:");
    scanf("%d", &x);

    if(x>0)
    {
        printf("o valor eh positivo.\n");
    }
    else if (x==0)
    {
        printf ("o valor eh zero.\n");
    }
    else // else if (x<0), pode ser assim tmb
    {
        printf("o valor eh negativo.\n");
    }
    return 0;
}
