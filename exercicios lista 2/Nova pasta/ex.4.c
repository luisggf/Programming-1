#include <stdio.h>

int main(void)
{
    int num_int;

    printf("Digite um n�mero entre 0 e 10000: ");
    scanf("%d", &num_int);

    if(num_int >= 10 && num_int <=99)
    {
        printf("O n�mero digitado pertence a casa das dezenas\n");
    }
    if(num_int >= 0 && num_int <= 9)
    {
        printf("O n�mero digitado pertence a casa das unidades\n");
    }
    if(num_int >= 100 && num_int <= 999)
    {
        printf("O n�mere pertence a casa das centenas\n");
    }
    else
    {
        if (num_int >= 1000 && num_int <= 9999)
        {
            printf("O n�mero pertence a casa dos milhares\n");
        }
    }
    if (num_int >= 10000 || num_int < 0)
    {
        printf("O n�mero digitado n�o pertence ao intervalo especificado\n");
    }
    for (; ;)
    {
        printf("Digite um n�mero entre 0 e 10000: ");
        scanf("%d", &num_int);

        if(num_int >= 10 && num_int <=99)
        {
            printf("O n�mero digitado pertence a casa das dezenas\n");
        }
        if(num_int >= 0 && num_int <= 9)
        {
            printf("O n�mero digitado pertence a casa das unidades\n");
        }
        if(num_int >= 100 && num_int <= 999)
        {
            printf("O n�mere pertence a casa das centenas\n");
        }
        else
        {
            if (num_int >= 1000 && num_int <= 9999)
            {
                printf("O n�mero pertence a casa dos milhares\n");
            }
        }
        if (num_int >= 10000 || num_int < 0)
        {
            printf("O n�mero digitado n�o pertence ao intervalo especificado \n");
        }
    }

    return 0;
}
