#include <stdio.h>
#include <stdlib.h>

float *aloca_vetor_float(int n)
{
    float *array = NULL;
    float *ponteiro = array;
    array = (float*) malloc(n * sizeof(float));
    if (array == NULL)
    {
        printf("Nao foi possivel alocar memoria");
    }
    ponteiro = array;
    return ponteiro;
    free(array);
}

void exibe_vetor(float *pont, int n)
{
    printf("Vetor: [");
    for (int i = 0; i < n; i++)
    {
        printf(" %.1f ", *pont);
        pont++;
    }
    printf("]");
}

int main()
{   
    int num;
    float *ponteiro1, *pontaux;
    printf("Digite o numero de elementos: ");
    scanf("%d", &num);
    ponteiro1 = aloca_vetor_float(num);
    pontaux = ponteiro1;
    for(int i = 0; i < num; i++)
    {
        printf("Digite o valor da posicao %d do vetor: ", i+1);
        scanf("%f", pontaux);
        pontaux++;
    }
    pontaux = ponteiro1;
    exibe_vetor(pontaux, num);
    return 0;
}