/* Codigo com a biblioteca convert.h
 *
 *
 *
 *
 * Autor: Alice Gomes da Silva/ Júlia Salvi Gonçalves/ Maria Isabela Silva Nunes
 * Data: 09/06/2022
 */

#include <stdio.h>
#include <math.h>
#include <string.h>
#include "convert.h"

int main()
{
    int dec,i=0,aux;
    char opcao, resp, bin[50];

    do
    {
            printf("\n1 - Decimal para binario\n2 - Binario para decimal\nEscolha uma opcao: ");
            setbuf(stdin,NULL);
            scanf("%c", &opcao);

            switch(opcao)
            {
                case '1':
                    do
                    {
                        printf("\nInforme um valor decimal: ");
                        scanf("%d", &dec);

                        if(dec<=0)
                        {
                            printf("Valor invalido!\n");
                        }
                    }while(dec<=0);

                    decPBin(dec);

                    break;

                case '2':
                    do{
                        printf("\nInforme um valor binario: ");
                        setbuf(stdin, NULL);
                        gets(bin);
                        i=0;
                        aux=0;
                        while(bin[i]!='\0')
                        {
                            if ((bin[i]) < '0' || (bin[i]) > '1')
                            {
                                aux = 1;
                            }
                            i++;
                        }
                        if(aux==1){
                            printf("Valor incorreto, binario [0,1].\n");
                        }
                    }while (aux==1);

                    binPDec(bin);

                    break;

                default:
                    printf("\nInforme uma opcao valida!");
            }

        printf("\n\nDeseja continuar o programa? (S/N)\n");
        setbuf(stdin, NULL);
        scanf("%c", &resp);

    }while(resp=='S'||resp=='s');
}
