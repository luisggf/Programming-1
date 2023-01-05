#include <stdio.h>
#define NC 2
#define NL 2

void le_mat(int mat[NL][NC], int mat1[NL][NC], int mat2[NL][NC])
{
    int i,j;
    int matr3[NL][NC];
    for (i = 0; i < NL; i++)
    {
        for ( j = 0; j < NC; j++)
        {
            printf("Digite a posicao (%dx%d) da matriz 0: ", i+1, j+1);
            scanf("%d", &mat[i][j]);
        }
    }
    for ( i = 0; i < NL; i++)
    {
        for (j = 0; j < NC; j++)
        {
            printf("Digite a posicao (%dx%d) da matriz 1: ", i+1, j+1);
            scanf("%d", &mat1[i][j]);
        }
    }
    for ( i = 0; i < NL; i++)
    {
        for ( j = 0; j < NC; j++)
        {
            printf("Digite a posicao (%dx%d) da matriz 2: ", i+1, j+1);
            scanf("%d", &mat2[i][j]);
        }
    }
}

void calc_mat(int mat[NL][NC], int mat1[NL][NC], int mat2[NL][NC])
{
    int matr3[NL][NC];
    int i,j;
    for(i = 0; i < NC; i++)
    {
        for(int j = 0; i < NC; j++)
            {
                matr3[i][j] = (mat[i][j] + mat1[i][j]); 
            }
    }

    for(i = 0; i < NL; i++)
    {
        for(j = 0; i < NC; j++)
            printf("%d ", matr3[i][j]);
        printf("\n");
    }
}

int main()
{
    int mats[NL][NC], mats1[NL][NC], mats2[NL][NC];
    le_mat(mats, mats1, mats2);
    calc_mat(mats, mats1, mats2);

    return 0;
}