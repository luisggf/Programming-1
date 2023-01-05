#include <stdio.h>
#define TAM 20

int main()
{
    int vet[TAM];
    int n, conti = 0, contp = 0;
    for (int i = 0; i < TAM; i++)
    {
        printf("%d Digite um numero: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("[");
    for (int i = 0; i < TAM; i++)
    {
        
        if (i < 4)
            printf("%d, ", vet [i]);
        else
            printf("%d] ", vet [i]);
    }
    for (int i = 0; i < TAM; i++)
    {
        if (vet[i] % 2 == 0)
            contp++;
        else
            conti++;
    }
    printf("\nN impares: %d \nN pares: %d", conti, contp);

    return 0;
}