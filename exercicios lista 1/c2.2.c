#include <stdio.h>
/* cast pode ser usado para converter numeros
ex: r_float = (float)n1 / n2;
n1 e n2 foram declarados como int inicialmente, e o cast converteu n1 para float
para resolver, em consequencia converte o restante */
int main(void)
{
    float res, n1, n2;

    printf("Input 2 numbers: ");
    scanf("%f %f", &n1, &n2);

    res = n1 + n2;
    printf("%.1f + %.1f = %.1f\n", n1,n2,res);

    res = n1 - n2;
    printf("%.1f - %.1f = %.1f\n", n1, n2, res);

    res = n1 * n2;
    printf("%.1f * %.1f = %.1f\n", n1, n2, res);

    res = n1 / n2;
    printf("%.1f / %.1f = %.2f\n", n1, n2, res);

    for ( ; ;)
    {
        printf("Input 2 numbers: ");
        res = n1 + n2;
        scanf("%f %f", &n1, &n2);

        printf("%.1f + %.1f = %.1f\n", n1,n2,res);

        res = n1 - n2;
        printf("%.1f - %.1f = %.1f\n", n1, n2, res);

        res = n1 * n2;
        printf("%.1f * %.1f = %.1f\n", n1, n2, res);

        res = n1 / n2;
        printf("%.1f / %.1f = %.2f\n", n1, n2, res);

        if (n1 == 2022)
        {
            printf("Program has been shut down");
            break;
        }
    }
    return 0;
}
