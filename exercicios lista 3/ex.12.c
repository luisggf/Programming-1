#include <stdio.h>

int main()
{
    int x;
    for (x = 2; x <= 13; x += 2)
    {
        printf("x1 = %d\n\n", x);
    }
    for (x = 5; x <= 22; x += 7)
    {
        printf("x2 = %d\n\n", x);
    }
    for (x = 3; x <= 15; x += 3)
    {
        printf("x3 = %d\n\n", x);
    }
    for (x = 1; x <= 5; x += 7)
    {
        printf("x4 = %d\n\n", x);
    }
    for (x = 12; x >= 2; x -= 3)
    {
        printf("x5 = %d\n\n", x);
    }
// lacos saem conforme o intervalo descrito
    return 0;
}