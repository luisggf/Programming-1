#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, y;

    printf("Digite 2 inteiros: ");
    scanf("%d%d", &x, &y);
    int *ponteirox = &x;
    int *ponteiroy = &y;

    if (&x > &y)
        printf("Endereço %p (x) é maior que endereço %p (y)\n", ponteirox, ponteiroy);
    else
        printf("Endereço %p (y) é maior que endereço %p (x)\n", ponteiroy, ponteirox);


    return 0;
}