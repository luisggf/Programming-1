#include <stdio.h>
#include <math.h>

int main ()
{
    float pi = 3.14159, h, r, a;
    char op;
    while (1)
    {
        printf("Digite um numero para comecar ou aperte (x) para sair: \n");
        scanf(" %c", &op);
        getchar ();
        if (op == 'x' || op == 'X')
        {
            printf("O programa foi encerrado! ");
            break;
        }
        if (op != 'x' || op != 'X')
        {
            printf("Digite o valor do raio e da altura da lata: \n");
            scanf("%f %f", &r, &h);
            a = pi * h * pow(r,2);
            printf("O volume da lata vale: %.5f \n", a);
        }
    }


    return 0;
}
