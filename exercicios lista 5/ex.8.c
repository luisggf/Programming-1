#include <stdio.h>
#define tam 5

void matrc(int vetmatc[tam], float vetsal[tam])
{
    for(int i = 0; i < tam; i++)
    {
        printf("\nMatricula do funcionario %d: ", i+1);
        scanf("%d", &vetmatc[i]);
    }
    for(int i = 0; i < tam; i++)
    {
        printf("\nSalario do funcionario %d: ", i+1);
        scanf("%f", &vetsal[i]);
    }
}
void calc(int vetmatc[tam], float vetsal[tam])
{
    float vetns[tam];
    for(int i = 0; i < tam; i++)
    {
        int porc;
        if(vetmatc[i] % 2 == 0)
            {
                vetns[i] = vetsal[i] * 1.15;
                porc = 15;
                
            }
        else
            {
                vetns[i] = vetsal[i] * 1.2;
                porc = 20;
            }
        printf("\nFuncionario (%d)\n\nAntigo salario: %.2f\nNovo salario: %.2f\nMatricula: %d\nPorcentagem de aumento: %d\n", i+1, vetsal[i], vetns[i], vetmatc[i], porc);
    }
}

int main()
{
    int vetm[tam];
    float vets[tam];
    matrc(vetm, vets);
    calc(vetm, vets);
    
    return 0;
}