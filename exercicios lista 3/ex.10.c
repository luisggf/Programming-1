#include <stdio.h>

int main ()
{
    int n, i, cont = 1;
    printf("Digite um valor inteiro: ");
    scanf("%d", &n);

    for (i = 1; n > 1; n--)
    {   
        cont++;
        i = i * n;
    }
    if (n < 0)
    {
        printf("Cod invalido");
    }
    else if (n == 0)
    {
        printf("N! = 0");
    }
    printf("%d! = %d\n", cont, i);


return 0;

}