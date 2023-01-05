#include <stdio.h>

int main()
{
    int k, n;
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
            printf("Input a number: ");
            scanf("%d", &n);
            for (k = 1; k <= n; ++k)
            {
                printf("%d * %d = %d\n ", k, n, k * n);
            }
        }
    }

    return 0;
}
