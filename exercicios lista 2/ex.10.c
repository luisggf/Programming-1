#include <stdio.h>
#include <stdlib.h>

// programa para exibir saldos, fazer depositos e saques

int main()
{
    float saldo = 0.0, valor, op;
    // char s, S, e, E, d, D, x, X, c, C;
    char op1, s;
    printf("Bem vindo ao banco virtual!");

    while (1)
    {
        printf(" Que operação deseja realizar? \n (S) para Saque \n (E) para exibir saldo \n (D) para realizar depositos. \n Caso deseje encerrar o procedimento digite (X). \n");
        scanf("%c", &op1);
        getchar();
        if (saldo <= -500 && op1 == s)
        {
            printf("O saque não pode ser realizado, pois o saldo está abaixo de 500 ");
        }

            else
                    if(op1 == 's' || op1 == 'S' || saldo > -500)
            {
                printf(" Quantos reais deseja sacar? \n");
                scanf("%f", &valor);
                saldo = saldo - valor;
                op = saldo;
                printf(" Seu novo saldo é: %.2f ", saldo);
                getchar();
            }

        if (op1 == 'e' || op1 == 'E')
        {
            printf(" Seu saldo atual é: %.2f ", saldo);
            getchar();
        }
        if ('d' == op1 || op1 == 'D')
        {
            printf(" Quantos reais deseja depositar? \n");
            scanf("%f", &valor);
            saldo = saldo + valor;
            op = saldo;
            printf(" Seu novo saldo é: %.2f ", saldo);
            getchar();
        }
        if (op1 == 'x' || op1 == 'X')
        {
            printf("Obrigado por usar o banco virtual!");
            break;
        }
    }

    return 0;
}
