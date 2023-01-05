#include <stdio.h>
#define tam 20

int main()
{
    int vet[tam];

    for (int i = 0; i < tam; i++)
    {
        printf("Digite os valores do vetor A: ");
        scanf("%d", &vet[i]);
    }
    printf(" Vetor normal [");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("%d, ", vet[i]);
        else
            printf("%d]", vet[i]);
    }
    printf("\n Vetor invertido [");
    for (int j = tam - 1; j >= 0; j--)
    {
        if (j > 0)
            printf("%d, ", vet[j]);
        else
            printf("%d]", vet[j]);
    }
    
    return 0;
}