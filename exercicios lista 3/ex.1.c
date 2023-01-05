#include <stdio.h>

int main()
{
    int k, n, sum;
    char j;

    for (int i = 0; i >= -1; i++)
    {
        
        if (i % 5 == 0)
        {
            printf("Deseja executar o programa? Caso nao, digite (x): ");
            scanf(" %c", &j);
            getchar();
        }
        if (j == 'x' || j == 'X')
        {
            printf("O programa foi encerrado!");
            break;
        }
        else if (j != 'x' || j != 'X')
        {
            sum = 0;
            printf("Input a integer number: ");
            scanf("%d", &n);
            for (k = 1; k <= n; ++k)
            {   
                sum = k + sum;
            }
        }
        printf("Sum of: %d is %d\n ", n, sum);
    }
    //printf("%d + %d = %")

    return 0;
}
