#include <stdio.h>
#define tam 5

void altvet(int vetor[])
{
    vetor[0] = -1;
    vetor[4] = 10;
}

int main()
{
    int vet[tam], alt;
    for (int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor da posicao %d: ", i + 1);
        scanf("%d", &vet[i]);
    }
    printf("Vetor original [");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("%d, ", vet[i]);
        else
            printf("%d]", vet[i]);
    }
    for (int i = 0; i < tam; i++)
    {
        altvet(vet);
    }

    printf("\nVetor alterado [");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("%d, ", vet[i]);
        else
            printf("%d]", vet[i]);
    }

    return 0;
}