#include <stdio.h>

int main ()
{
    int op;
    char f;
    for (int i = 0; i >= -1; i++)
    {
        if (i % 5 == 0)
        {
            printf("Deseja executar o programa? Caso nao, digite (x): ");
            scanf(" %c", &f);
            getchar ();
        }
        if (f == 'x' || f == 'X')
        {
            printf("O programa foi encerrado!");
            break;
        }
        else if (f != 'x' || f != 'X')
        {
            printf("Digite um numero entre 1 e 12: ");
            scanf("%d", &op);

            switch(op)
            {
            case 1:
                printf("O mes digitado corresponde a Janeiro \n");
                break;
            case 2:
                printf("O mes digitado corresponde a Fevereiro \n");
                break;
            case 3:
                printf("O mes digitado corresponde a Marco \n");
                break;
            case 4:
                printf("O mes digitado corresponde a Abril \n");
                break;
            case 5:
                printf("O mes digitado corresponde a Maio \n");
                break;
            case 6:
                printf("O mes digitado corresponde a Julho \n");
                break;
            case 7:
                printf("O mes digitado corresponde a Junho \n");
                break;
            case 8:
                printf("O mes digitado corresponde a Agosto \n");
                break;
            case 9:
                printf("O mes digitado corresponde a Setembro \n");
                break;
            case 10:
                printf("O mes digitado corresponde a Outubro \n");
                break;
            case 11:
                printf("O mes digitado corresponde a Novembro \n");
                break;
            case 12:
                printf("O mes digitado corresponde a Dezembro \n");
                break;
            default:
                printf("O codigo digitado nao corresponde a nenhum mes \n");
                break;

            }
        }
    }
    return 0;
}
