#include <stdio.h>

int main()
{
    float sal, me_sal = 0, me_nf = 0, perc, maior = 0;
    int num_fi, cont = 0, cont1 = 0, cont2 = 0, k, cont_s = 0, cont_f = 0;

    do
    {   
        printf("Digite o salario #%d: ", cont);
        scanf("%f", &sal);

        cont++;
        cont_s = cont_s + sal;
        me_sal = cont_s / cont;

        printf("Digite o numero de filhos da familia #%d: ", cont1);
        scanf("%d", &num_fi);
        cont1++;
        cont_f = cont_f + num_fi;
        me_nf = cont_f / (float)cont1;
    
            if (sal > maior)
            {
                maior = (float)sal;
            }
            else if (sal <= 100)
            {
                cont2++;
            }
        perc = cont2 / (float)cont;
    printf("\n Media salarial: %.2f \n Media do numero de filhos: %.2f \n Porcentagem de salarios abaixo de 100: %.2f \n Maior salario: %.2f \n\n ", me_sal, me_nf, perc, maior);
    printf("Caso deseje parar digite (-1): ");
    scanf("%d", &k);
       }   while (k != -1);
    

    return 0;
}