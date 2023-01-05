#include<stdio.h>

void main()
{
    int vet[] = {4, 9, 13};
    int *o = vet;
    int i;
    for(i=0; i<3; i++)
    {
        printf("%x ", o++);
    }
}
//
