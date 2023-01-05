#include<stdio.h>

void main()
{
    int vet[] = {4, 9, 13};
    int i;
    for(i=0; i<3; i++)
    {
        printf("%x ",vet+i);
    }
}
//imprime o endereco apontado pelo ponteiro
//aumenta os "pulos" do vetor
