#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

void alt_pont(int vetr[tam], int n)
{
    int *ponta;
    ponta = vetr;
    printf("[");
    for (int i = 0; i < tam; i++)
    {
        *ponta = (*ponta) * n;
        printf(" %d ", *ponta);
        ponta++;
    }
    printf("]\n");
}
int main()
{
    int vet[tam];
    int *pont;
    int num;
    pont = vet;
    srand(time(0));
    printf("[");
    for(int i = 0; i < tam; i++)
    {
        *pont = rand()%100;
        printf(" %d ", *pont);
        pont++;
    }
    printf("]\n");
    printf("Por quanto deseja multiplicar os membros do vetor? ");
    scanf("%d", &num);
    alt_pont(vet, num);

    return 0;
}