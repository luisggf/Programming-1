#include <stdio.h>

int main()
{
    float sal_tecn, sal_gert, sal_func;
    int code;

    printf("Digite seu código de usuário: ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        printf("Salário antigo do técnico: ");
        scanf("%f", &sal_tecn);
        printf("Novo salário é: %6.2fR$\n", sal_tecn * 1.5);
        break;

    case 2:
        printf("Salário antigo do gerente: ");
        scanf("%f", &sal_gert);
        printf("Novo salário é: %6.2fR$\n", sal_gert * 1.3);
        break;

    case 3:
        printf("Salário antigo dos demais funcionários: ");
        scanf("%f", &sal_func);
        printf("Novo salário é: %6.2f\nR$", sal_func * 1.2);
        break;

    default:
        printf("Código invalido\n");
        break;

    }
    for (; ;)
    {

        printf("Digite seu código de usuário: ");
        scanf("%d", &code);

        switch (code)
        {
        case 1:
            printf("Salário antigo do técnico: ");
            scanf("%f", &sal_tecn);
            printf("Novo salário é: %6.2fR$\n", sal_tecn * 1.5);
            break;

        case 2:
            printf("Salário antigo do gerente: ");
            scanf("%f", &sal_gert);
            printf("Novo salário é: %6.2fR$\n", sal_gert * 1.3);
            break;

        case 3:
            printf("Salário antigo dos demais funcionários: ");
            scanf("%f", &sal_func);
            printf("Novo salário é: %6.2f\nR$", sal_func * 1.2);
            break;

        default:
            printf("Código invalido\n");
            break;

        }
    }

    return 0;
}
