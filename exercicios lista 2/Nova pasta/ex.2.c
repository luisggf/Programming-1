#include <stdio.h>
#include <math.h>

int main(void)
{
    float a = 1.5, e = 1.2, f = 4.3, delta, res, aux;
    int b =4, c = 2, d = 3;
    delta = (pow(b,2) - (4 * a * c));
    aux = (a+((pow(c+d,2)/pow(b,2))*d));
// operation 1

    res = a * ((c + d) / b * (e + f));
    printf("First operation result: %.2f\n", res);

// operation 2

    res = (pow(a,b+c) / b+f) + d;
    printf("Second operation result: %.2f\n", res);

// operation 3
// modulo da operacao aux
    if (aux < 0)
    {
        aux *= -1;
    }
    res = aux * 1/c;
    printf("Third operation result: %.2f\n", res);

// operation 4
    res = (-b + ((sqrt(delta)) / 2*a));
    printf("Fourth operation result: %.2f\n", (- b + (sqrt(delta))) / (2 * a));

    return 0;
}
