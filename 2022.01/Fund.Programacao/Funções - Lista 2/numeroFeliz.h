int numeroFeliz (int num)
{
    int quadrado,dezena,centena,unidade,mil;

       do
       {
            if (num<10)
            {
                quadrado=num*num;
                num=quadrado;


            }
            if (num<100)
            {
                dezena=num/10;
                unidade=num%10;

                num=((dezena*dezena)+(unidade*unidade));

            }
            if (num<1000)
            {
                centena=num/100;
                dezena=num%100/10;
                unidade=num%100%10;

                num=((centena*centena)+(dezena*dezena)+ (unidade*unidade));

            }
            if (num<10000)
            {

                mil=num/1000;
                centena=num%1000/100;
                dezena=num%100/10;
                unidade=num%100%10;

                num=((mil*mil)+(centena*centena)+(dezena*dezena)+ (unidade*unidade));
            }
            if (num==37)
            {
                break;
            }
        }while (num!=1);

        if (num==1)
        {
            num=1;
        }
        else
        {
            num=0;
        }

       return num;
}
