#include <stdio.h>

int main()
{
    float l1, l2, l3;
    char op1;

    while (1)
    {   
        printf("Digite um numero para prosseguir ou X para parar: ");
        scanf(" %c", &op1);
        getchar();
        if (op1 == 'x' || op1 == 'X')
        {
            printf("O programa foi encerrado.");
            break;
        }
        else
        {
            printf("Digite os lados do triangulo: ");
            scanf("%f %f %f", &l1, &l2, &l3);
            if (l1 == l2 && l1 == l3)
            {
                printf("O triangulo e equilatero \n");
            }
            else if (l1 != l2 && l1 != l3 && l3 != l2)
            {
                printf("O triangulo e escaleno \n");
            }
            else
            {
                printf("O triangulo e isosceles \n");
            }
        }
    }

    return 0;
}