#include <stdio.h>
#define tam 20

int main()
{

    int vet[tam];
    int vetinv[tam];
    for(int i = 0; i < tam; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i+1);
        scanf("%d", &vet[i]);
        //printf(" %d ", vet[i]);
    }

    printf("String original: ");
    for(int i = 0; i < tam; i++)
    {
        printf(" %d ", vet[i]);
    }


    printf("\nString trocada: ");
    for (int i = tam - 1; 0 <= i; i--)
        {
            printf(" %d ", vet[i]);
        }

    return 0;
}

