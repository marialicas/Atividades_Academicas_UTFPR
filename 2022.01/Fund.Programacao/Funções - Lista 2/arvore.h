void arvore (int altura)
{
    int i,j,k;

     for (i=1;i<=altura;i++)
    {
       for (j=altura;j>=i;j--)
       {
           printf(" ");
       }
       for (k=1;k<=(i*2)-1;k++)
        {
            printf("*");
        }
       printf("\n");
    }

    for (j=1;j<=altura/2;j++)
    {
        for (i=1;i<=altura;i++)
        {
            printf(" ");
        }
        printf("*");
        printf("\n");
    }
 }
