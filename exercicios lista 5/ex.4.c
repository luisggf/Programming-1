#include <stdio.h>
#define tam 20

int main()
{
    int vet[tam], maior = 0, menor = 0;
    for (int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor da posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }

    menor = vet[0];

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] >= maior)
            maior = vet[i];

        else if (vet[i] <= menor)
            menor = vet[i];
    }

    for (int i = 0; i < tam; i++)
    {
        if (vet[i] == menor)
            printf("O menor numero apareceu na posicao %d e e o %d\n", i + 1, menor);

        else if (vet[i] == maior)
            printf("O maior numero apareceu na posicao %d e e o %d\n", i + 1, maior);
    }

    printf("[");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("%d, ", vet[i]);

        else
            printf("%d]", vet[i]);
    }

    return 0;
}