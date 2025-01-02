//gets = "%[^\n]s" para leitura, puts para impressão
//Puts = %s

//Fazer strings iguais
void stringIguais (char str[])
{
    int i;
    for(i=0;str[i]!='\0';i++)
    {
        str2[i]=str1[i];
    }
    puts(str1);
    puts(str2);
}

// tamanho da string
int tamStr (char str[])
{
    int i;
    while (str1[i]!='\0') // tamanho da string
    {
        i++;
    }

    //i=i-1;
    return i;
}

//inverter string
void inverte (char str[],int tam)
{
    int i,j;
    for (i=tam;i>=0;i--) // inverter
    {
        str2[j]=str1[i];
        j++;
    }
    str2[j]='\0';
    puts(str2);
}

//Quantidade de vogais em uma string
int qtdV (char str[])
{
    int i,cont=0,j,tam=0;
    char vogais[11] = "aeiouAEIOU";

    for (i=0;str[i]!='\0';i++)
    {
        tam++;
           for (j=0;vogais[j]!='\0';j++)
           {
               if (str[i] == vogais[j])
               {
                   cont++;
               }
           }
    }

    return cont;
}
//contar vogais e consoantes
void contVeC (char str [])
{
    int vogais = 0, consoantes = 0, i;
    char ch;

    for (i = 0; str[i] != '\0'; i++)
    {
        ch = str[i];

        if (ch == 'a' || ch == 'e'
            || ch == 'i' || ch == 'o'
            || ch == 'u' || ch == 'A'
            || ch == 'E' || ch == 'I'
            || ch == 'O' || ch == 'U')
            vogais++;

        else if (ch == ' ')
            continue;

        else
            consoantes++;
    }
    printf("\nVogais: %d", vogais);
    printf("\nConsonantes: %d", consoantes);
}

//letras maisculas
int letrasMaiscula (char str[])
{
    int i=0,cont=0;

    while (str[i]!='\0')
    {
        if (str[i]>='A' && str[i]<='Z')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

//letras minusculas
int letrasMinuscula (char str[])
{
    int i=0,cont=0;

    while (str[i]!='\0')
    {
        if (str[i]>='a' && str[i]<='z')
        {
            cont++;
        }
        i++;
    }
    return cont;
}

//contar caracter com espaço
int contCarCEspaco (char texto[])
{
    int i=0;
    while (texto[i]!='\0')
    {
        i++;
    }

    return i;
}

//contar caracter sem espaço
int contCarSEspaco (char texto[])
{
    int i=0,cont=0;
    while (texto[i]!='\0')
    {
        if (texto[i] != ' ')
            {
                cont++;
            }
        i++;
    }

    return cont;
}

//espaços em um vetor
void espEmVet (char str[])
{
    int i,j,espaco=0;
    for (i=0;texto[i]!='\0';i++)
    {
        if (texto[i]==' ')
        {
            espaco++;
        }
        else if (espaco!=0)
        {
           vet[j]=espaco;
           j++;
           espaco=0;
        }
    }
    if (espaco!=0)
    {
        vet[j]=espaco;
        j++;
        espaco=0;
    }
    for (i=0;i<j;i++)
        {
            printf("%d\t",vet[i]);
        }
}

//quantidade de palavras
int qtdePalavras (char texto [])
{
    int i=0,cont=0;
    if (texto[i]!=' ')
    {
        cont++;
        i++;
    }

   while (texto[i]!='\0')
    {
        if (texto[i]==' ' && texto[i+1]!='\0' && texto[i+1]!=' ')
        {
            cont++;
        }
        i++;
    }

    return cont;
}

//duplica Vogal
void duplicaVogal (char str[])
{
    char vogalD[100];
    int i,j,k,cont=0,l=0;

    for (i=0;str[i]!='\0';i++)
    {
       if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
           str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
       {
           cont++;
           for (k=1;k<=cont;k++)
           {
               vogalD[l]=str[i];
               l++;
           }
       }
       else
       {
           vogalD[l]=str[i];
           l++;
       }
    }
    vogalD[l]='\0';

    printf("%s",vogalD);
}
