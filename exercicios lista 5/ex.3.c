#include <stdio.h>
#define tam 10

int main()
{
    int vet[tam], vet1[tam], vetr[tam];
    for(int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor da posicao %d: ", i+1);
        scanf("%d", &vet[i]);
    }
    for(int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor da posicao %d do 2 vetor: ", i+1);
        scanf("%d", &vet1[i]);
    }
    printf("\nProduto dos vetores e: [");
    for(int i = 0; i < tam; i++)
    {
        vetr[i] = vet[i] * vet1[i];
        if (i < tam - 1)
            printf("%d, ", vetr[i]);
        else
            printf("%d]", vetr[i]);
    }


return 0;

}