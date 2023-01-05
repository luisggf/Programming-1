#include <stdio.h>
#include <stdlib.h>
#include <math.h>
typedef struct plan{
    float x;
    float y;
}cartesiano;


int main()
{   
    int n;
    cartesiano *Planox = NULL;
    printf("Quantos pontos deseja analisar: ");
    scanf("%d", &n);
    Planox = (cartesiano*) malloc(n * sizeof(cartesiano));
    float distanc[n];
    if (Planox == NULL)
    {
        printf("Não foi possível alocar memória!");
        return -1;
    }
    for (int i = 0; i < n; i++)
    {
        printf("Qual o valor de x: ");
        scanf("%f", &Planox[i].x);
        printf("Qual o valor de y: ");
        scanf("%f", &Planox[i].y);
        distanc[i] = sqrt((pow(Planox[i].x, 2) + pow(Planox[i].y, 2)));
        if (distanc[i] < 0)
            distanc[i] *= -1;
    }
    
    for (int i = 0; i < n; i++)
    {
        printf("Distancia dos pontos (%.1f %.1f) ate a origem e: %.1f\n", Planox[i].x, Planox[i].y, distanc[i]);
    }
    
    free(Planox);
    return 0;
}

/*float le_int(char msg)
{
    float n;
    do
    {
       printf("%s", msg);
       scanf("%f", &n); 
       if(n >= 100 || n <= -100)
          printf("O valor da coordenada deve ser entre 100 e -100");
        
    }while(n <= 100 || n >= -100);  
    return n;
}
float calc_dist(float x1, float y1)
{
    float dist;
    float distx = pow(dist, 2);
    distx =  pow(x1, 2) + pow(y1, 2);
    if (dist < 0)
    {
        dist *= -1;
    }
    return dist; 
}*/
