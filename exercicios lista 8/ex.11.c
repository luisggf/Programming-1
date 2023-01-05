#include <stdio.h>
#include <stdlib.h>

int main ()
{
    int x = sizeof(int);
    int w = sizeof(float);
    int y = sizeof(char);
    int z = sizeof(double);

    printf("Valor em Bytes de int: %d || float: %d || char: %d || double: %d", x, w, y, z);
 
    return 0;
}