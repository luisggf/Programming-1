#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define tam 10

void imp_vet(int vetr[tam])
{
    int *pointer1;
    pointer1 = vetr;
    
    printf("Vetor gerado sem indices: [");
    for(int i = 0; i < tam; i++)
    {
        printf(" %d ", *pointer1);
        pointer1++;
    }
    printf("]");
    pointer1 = vetr;
}

int main()
{
    int vet[tam];
    int *pointer;
    pointer = vet;
    srand(time(0));
    for(int i = 0; i < tam; i++)
    {
        *pointer = rand()%201-100; // gera numeros aleatorios de (100 a - 100) || utilizo esse metodo pra nao precisar ficar digitando toda hora
        pointer++;
    }
    pointer = vet;
    imp_vet(vet);

    return 0;
}