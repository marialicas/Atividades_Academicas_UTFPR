int primo (int num) // pq tem um retorno e ele é inteiro // nome da função // parametro (conversa entre as funções (numero que vai receber para calcular os primos)
{
    int i, qtde =0;
    for (i=2;i<num;i++)
    {
        if (num%i==0)
        {
            qtde++;
            break;
        }
    }
    return qtde;
}
