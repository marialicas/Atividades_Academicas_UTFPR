/*2) Ler uma s�rie de n�meros indicados pelo usu�rio at� ser informado o valor zero. Encontrar e mostrar o
maior e o menor dos valores informados pelo usu�rio. O valor zero indica o final da leitura e n�o deve ser
considerado.*/

int main ()
{
    int num, maior, menor,primeiro=0;

    do
    {
        printf("informe um numero (informe 0 para finalizar): ");
        scanf("%d", &num);

            if (primeiro==0)
            {
                maior=num;
                menor=num;
                primeiro=1;
            }
            else
            {
                if (num>maior)
                {
                    maior=num;
                }
                else if (num<menor && num!=0)
                {
                    menor=num;
                }
            }

    } while (num!=0);

    printf("\nMaior: %d\tMenor: %d\n", maior, menor);

    return 0;
}
