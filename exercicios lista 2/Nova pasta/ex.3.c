#include <stdio.h>
#include <math.h>

int main(void)
{

    float a, b, c, delta, x1, x2;

    printf("Insert value a: ");
    scanf("%f", &a);
    printf("Insert value b: ");
    scanf("%f", &b);
    printf("insert value c: ");
    scanf("%f", &c);

    delta = (pow(b,2) - (4 * a * c));
    x1 = (- b + (sqrt(delta))) / (2 * a);
    x2 = (- b - (sqrt(delta))) / (2 * a);

    if (delta > 0)
    {
        printf("first root value: %.3f\n", x1);
        printf("first root value: %.3f\n", x2);
    }
    if (delta == 0)
    {
        printf("root value: %.3f\n", x1);
    }

    else
    {
        if (delta < 0)
            printf("value does not exist");
    }
    printf("-----------------------------------------------------------\n");
    while (delta >= 0)
    {
        printf("Insert value a: ");
        scanf("%f", &a);
        printf("Insert value b: ");
        scanf("%f", &b);
        printf("insert value c: ");
        scanf("%f", &c);

        delta = (pow(b,2) - (4 * a * c));
        x1 = (- b + (sqrt(delta))) / (2 * a);
        x2 = (- b - (sqrt(delta))) / (2 * a);

        if (delta > 0)
        {
            printf("First root value: %.3f\n", x1);
            printf("Second root value: %.3f\n", x2);
        }
        if (delta == 0)
        {
            printf("Root value: %.3f\n", x1);
        }

        else
        {
            if (delta < 0)
                printf("Root does not exist\n");
        }
        printf("-----------------------------------------------------------\n");
    }
    return 0;
}
