/*calcular o resto de uma divisão*/

#include <stdio.h>

int main()
{
    int num1=688, num2=45, resto;
    float res;

    res=(float)num1/num2;
    resto=num1 % num2;

    printf("%d / %d = %f", num1, num2, res);
    printf("resto da divisao: %d\n", resto);

    return 0;
}
