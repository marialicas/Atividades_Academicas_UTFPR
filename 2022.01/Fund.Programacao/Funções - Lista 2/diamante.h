void diamante (int altura)
{
    int i,j,k;

    altura=altura/2+1;

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
     for (i=altura-1;i>=1;i--)
    {
       for (j=i;j<=altura;j++)
       {
           printf(" ");
       }
       for (k=(i*2)-1;k>=1;k--)
        {
            printf("*");
        }
       printf("\n");
    }
}
