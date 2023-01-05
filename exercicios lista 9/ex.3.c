#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define tam 50


typedef struct ponto{
        int x1, y1;
        int x2, y2;
    }ponto;

typedef struct retangulo
{
    int perimetro;
    float diagonal, area;
    ponto coordenadas;
    
}retangulo;

void le_int(int *n, char msg [])
{
    do
    {
        printf("%s", msg);
        scanf("%d", n);
    }while(n < 0);
}
int main()
{
    int qtd;
    printf("Digite o numero de quadrados que deseja buscar informações: ");
    scanf("%d", &qtd);
    retangulo *ret = NULL;
    ret = (retangulo*) malloc(qtd * sizeof(retangulo));
    if(!ret)
    {
        printf("Não foi possível alocar memória.");
        return -1;
    }
    else
    {
        for (int i = 0; i < qtd; i++)
        {
            le_int(&ret[i].coordenadas.x1, "Ponto superior x: ");
            le_int(&ret[i].coordenadas.y1, "Ponto superior y: ");
            le_int(&ret[i].coordenadas.x2, "Ponto inferior x: ");
            le_int(&ret[i].coordenadas.y2, "Ponto inferior y: ");
            ret[i].area = ret[i].coordenadas.y1 * ret[i].coordenadas.x2;
            ret[i].diagonal = sqrt(pow(ret[i].coordenadas.y1, 2) + pow(ret[i].coordenadas.x2, 2));
            ret[i].perimetro = (2 * ret[i].coordenadas.y1) + (2 * ret[i].coordenadas.x2);
        }
        for (int i = 0; i < qtd; i++)
        {
            printf("\n######## Dados sobre o retangulo ########\n");
            printf("\n\tÁrea: %.1f\n\tDiagonal: %1.f\n\tPerimetro: %d", ret[i].area, ret[i].diagonal, ret[i].perimetro);
        }
    }
    free(ret);
    return 0;
}
