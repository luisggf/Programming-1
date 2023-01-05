#include <stdio.h>
#include <stdlib.h>
#define tam 10
int main()
{
    float vet[tam];
    float *pont, *pontaux;
    pont = vet;
    pontaux = pont;

    for(int i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%f", pontaux);
        pontaux++;
    }
    printf("Vetor: [");
    for (int i = 0; i < tam; i++)
    {
        printf(" %.1f ", vet[i]);
    }
    printf("]\n\n");
   
   printf("Vetor enderecos: [");
    for (int i = 0; i < tam; i++)
    {
        printf(" %p ", pontaux);
        pontaux++;
    }
    printf("]");
    return 0;
}