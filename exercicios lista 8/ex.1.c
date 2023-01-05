#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
    int x, y;
    srand(time(0));
    x = rand()%999;
    y = rand()%999;
    int *ponteirox = &x;
    int *ponteiroy = &y;

    if (&x > &y)
    {
        printf("O maior endereço é: %p (valor de x [%d])\n", ponteirox, *ponteirox);
        printf("O menor endereço é: %p (valor de y [%d])\n", ponteiroy, *ponteiroy);
    }
    else 
    {
        printf("O menor endereço é: %p (valor de x [%d])\n", ponteirox, *ponteirox);
        printf("O maior endereço é: %p (valor de y [%d])\n", ponteiroy, *ponteiroy);
    }


    return 0;
}