#include <stdio.h>

void gera_pirmd(int base)
{

    for(int i = 1; i <= base; i++)
    {
        for (int j = 1; j <= base; j++)
        {
            if (i >= j)
                printf("*");
            else    
                printf(" ");
    
        }
        printf("\n");
    }
    printf("\n");
    for(int i = base; 1 >= base; i--)
    {
        for (int j = 1; j <= base; j++)
        {
            if (j = i)
                printf("*");
            else    
                printf(" ");
    
        }
        printf("\n");
    }
}

int main()
{
    int k;
    printf("Digite quantos asteriscos deseja na base do triângulo: ");
    scanf("%d", &k);
    gera_pirmd(k);

    return 0;
}