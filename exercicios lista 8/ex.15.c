#include <stdio.h>
#include <stdlib.h>

int *multiplica_vetores(int *pon, int *ponts, int qtd)
{
    int *vetor_mult = NULL;
    vetor_mult = (int*) malloc(qtd * sizeof(int));
    if (vetor_mult == NULL)
        printf("Nao foi possivel alocar memoria");
    int *pointer = vetor_mult; 
    for(int i = 0; i < qtd; i++)
    {
        *pointer = (*pon) * (*ponts);
        pointer++;
        pon++;
        ponts++;
    }
    pointer = vetor_mult;
    return pointer;
    free(vetor_mult);
}

void exibe_vetor(int *pont, int num)
{
    printf("Vetor multiplicado: [");
    for(int i = 0; i < num; i++)
    {
        printf(" %d ", pont[i]);
    }
    printf("]");
}
int *le_vetor(int num)
{
    int *pont = NULL, *pont1;
    pont = (int*) malloc(num * sizeof(int));
    if (!pont)
    {
        printf("Nao foi possivel alocar memoria!");
    }
    else
    {
        pont1 = pont;
        for (int i = 0; i < num; i++)
        {
            printf("Digite o valor %d do vetor: ", i+1);
            scanf("%d", &pont1[i]);
        }
        pont1 = pont;
        return pont1;
        free(pont);
    }    
}

int main()

{
    int *vet1, *vet2, n, *vet3;
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    vet1 = le_vetor(n);
    vet2 = le_vetor(n);
    vet3 = multiplica_vetores(vet1, vet2, n);
    exibe_vetor(vet3, n);
    return 0;
}