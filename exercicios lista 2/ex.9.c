#include <stdio.h>

int main()
{
    float x, y;
    printf("Determine os valores de x e y entre -1 e 1.\nValor de x: ");
    scanf("%f", &x);
    printf("Valor de y: ");
    scanf("%f", &y);

    if (x > 0 && y > 0 && y <= 1 && x <= 1)
        printf("Pertence ao primeiro quadrante\n");

    if (x < 0 && y > 0 && y <=1 && x >= -1)
        printf("Pertence ao segundo quadrante\n");

    if (x < 0 && y < 0 && y >= -1 && x >= -1)
        printf("Pertence ao terceiro quadrante\n");

    if (x > 0 && y < 0 && y >= -1 && x <= 1)
        printf("Pertence ao quarto quadrante\n");

    for (int k = 0; k > -1; ++k)
    {
        printf("Determine os valores de x e y entre -1 e 1.\nValor de x: ");
        scanf("%f", &x);
        printf("Valor de y: ");
        scanf("%f", &y);

        if (x > 0 && y > 0 && y <= 1 && x <= 1)
            printf("Pertence ao primeiro quadrante\n");

        if (x < 0 && y > 0 && y <=1 && x >= -1)
            printf("Pertence ao segundo quadrante\n");

        if (x < 0 && y < 0 && y >= -1 && x >= -1)
            printf("Pertence ao terceiro quadrante\n");

        if (x > 0 && y < 0 && y >= -1 && x <= 1)
            printf("Pertence ao quarto quadrante\n");

    }

    return 0;
}
