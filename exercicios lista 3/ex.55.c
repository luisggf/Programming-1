#include <stdio.h>

#include <stdio.h>

int main()
{
    float sum_p = 0, peso_corrente, avg_pes = 0;
    int idade, cont = 0;
    char j;
    for (int i = 0; i >= -1; i++)
    {
            printf("Deseja adicionar uma idade? Caso nao, digite (n), caso sim, digite (s). ");
            scanf(" %c", &j);
            getchar();

        if (j == 'n' || j == 'N')
        {
            printf("O programa foi encerrado!");
            break;
        }

        else if (j != 's' || j != 'S')
        {
            printf("Digite a idade: ");
            scanf("%d", &idade);
            if (idade > 30 && idade < 100)
            {
                printf("Digite o peso: ");
                scanf("%f", &peso_corrente);
                sum_p = sum_p + peso_corrente;
                cont++;
                avg_pes = sum_p / cont;
                printf("Soma do(s) pesos = %.2f \n Média dos pesos significativos = %.2f \n", sum_p, avg_pes);

            }
            if (idade <= 30)
            {
                printf("A idade não está no espaço de amostragem. \n");
            }
        }
    }
    return 0;
}