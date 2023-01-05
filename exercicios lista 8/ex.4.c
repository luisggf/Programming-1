#include <stdio.h>
#include <stdlib.h>
#define tam 10

// percebe-se que as posicoes de memoria variam de 8 em 8 bytes quando alocamos variaveis tipo double

int main()
{
    double vet[tam];
    double *pont, *pontaux;
    pont = vet;
    pontaux = pont;

    for(int i = 0; i < tam; i++)
    {
        printf("Digite o valor %d do vetor: ", i+1);
        scanf("%lf", pontaux);
        pontaux++;
    }
    printf("Vetor: [");
    for (int i = 0; i < tam; i++)
    {
        printf(" %.1lf ", vet[i]);
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