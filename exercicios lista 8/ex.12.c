#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void soma_vet(int *ponts, int *pontar, int num)
{
    int *veta = NULL;
    int *ponteiro;
    veta = (int*) malloc(num * sizeof(int));
    if (veta == NULL)
    {
        printf("Alocacao de memoria falhou!");
    }
    ponteiro = veta;
    for(int i = 0; i < num; i++)
        {
            *ponteiro = (*ponts) + (*pontar);
            ponteiro++;
            ponts++;
            pontar++;
        }
    ponteiro = veta;
    printf("\n");
    printf("Vetor resultante: [");
    for(int i = 0; i < num; i++)
        {
            printf(" %d ", *ponteiro);
            ponteiro++;
        }
    printf("]");
    free(veta);
}
int main ()
{
    int n;
    int *vet = NULL;
    int *vet1 = NULL;
    int *pont, *pont1;
    srand(time(NULL));
    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    vet = (int *) malloc(n * sizeof(int));
    vet1 = (int *) malloc(n * sizeof(int));

    if(vet == NULL)
    {
        printf("Nao foi possivel alocar memoria");
        return -1;
    }
    else
    {
        pont = vet;
        for(int i = 0; i < n; i++)
        {
            printf("Digite o valor %d: ", i+1);
            scanf("%d", pont);
            pont++;
        }
        pont = vet;
        printf("Vetor 1: [");
        for(int i = 0; i < n; i++)
        {
            printf(" %d ", *pont);
            pont++;
        }
        printf("]");
        pont = vet;
        printf("\n");
        pont1 = vet1;
        for(int i = 0; i < n; i++)
        {
            *pont1 = rand()%10;
            pont1++;
        }
        pont1 = vet1;
        printf("Vetor 2: [");
    for(int i = 0; i < n; i++)
        {
            printf(" %d ", *pont1);
            pont1++;
        }
        printf("]");
        pont1 = vet1;
        soma_vet(pont, pont1, n);
    }

    free(vet);
    free(vet1);

    return 0;
}
