int primo (int num) // pq tem um retorno e ele � inteiro // nome da fun��o // parametro (conversa entre as fun��es (numero que vai receber para calcular os primos)
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
