#include <stdio.h>
//#define tam 4
int tam = 20;
float avg(int vet1[20])
{
    int acmle = 0;
    float med;
    for(int i = 0; i < 20; i++)
    {
            acmle += vet1[i];
            med = (float)acmle / tam;
    } 
    return med;
}
int main()
{
    int vet[20];
    float media;
    for(int i = 0; i < 20; i++)
    {
        printf("%d Num: ", i+1);
        scanf("%d", &vet[i]);
        if(vet[i]<0)
        {
            printf("Digite somente inteiros positivos!\n");
            vet[i] = 0;
            tam--;  
        }
    }
    printf("[");
    for(int i = 0; i < 20; i++)
    {  
        if(i <  19)
            printf("%d, ", vet[i]);
        else
            printf("%d]", vet[i]);
    }
    media = avg(vet);
    printf("\nMedia: %.2f", media);
    printf("\nVetor abaixo da media [ ");
    for(int i = 0; i < 20; i++)
    {
        if(vet[i] < media)
            printf("%d ", vet[i]);
    }
    printf("]");

    return 0;
}