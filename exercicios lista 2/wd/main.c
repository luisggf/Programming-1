#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float i = 32, j = 64;
    for (int k = 0; k > -1; ++k)
    {
        i *= 1.001;
        j *= 1.001;
        printf("%.2f %.2f\n", i,j);

            if (i <= 0 || j <= 0)
            {
                break;
            }
    }
    return 0;
}
