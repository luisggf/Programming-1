#include <stdio.h>
#include <stdlib.h>
#define tam 10

void notas(float vet[tam], float vet1[tam])
{   
    for (int i = 0; i < tam; i++)
    {
        printf("\nDigite o valor da P1 do aluno %d: ", i + 1);
        scanf("%f", &vet[i]);
        printf("\nDigite o valor da P2 do aluno %d: ", i + 1);
        scanf("%f", &vet1[i]);
    }
}

void media(float vetm[tam], float vet[tam], float vet1[tam])
{
    for (int i = 0; i < tam; i++)
        vetm[i] = (float)(vet[i] + vet1[i]) / 2;
        
}
void aluno(float vetm[tam], float vet[tam], float vet1[tam])
{
    for(int i = 0; i < tam; i++)
    {
        printf("\nAluno %d: P1: %.1f \n P2: %.1f \n Media: %.2f", i+1, vet[i], vet1[i], vetm[i]);
    }

}

int main()
{
    float vetm1[tam], vetp1[tam], vetp2[tam];
    notas(vetp1, vetp2);
    media(vetm1, vetp1, vetp2);
    printf("\nVetor notas P1/P2 [");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("(%.1f / %.1f) ||| ", vetp1[i], vetp2[i]);
        else
            printf("(%.1f / %.1f)]\n", vetp1[i], vetp2[i]);
    }
     printf("\nVetor media [");
    for (int i = 0; i < tam; i++)
    {
        if (i < tam - 1)
            printf("(%.2f) ||| ", vetm1[i]);
        else
            printf("(%.2f)]\n", vetm1[i]);
    }
    aluno(vetp1, vetp2, vetm1);

    return 0;
}