#include <stdio.h>

int main()
{
    float sal_tecn, sal_gert, sal_func;
    int code;

    printf("Digite seu c�digo de usu�rio: ");
    scanf("%d", &code);

    switch (code)
    {
    case 1:
        printf("Sal�rio antigo do t�cnico: ");
        scanf("%f", &sal_tecn);
        printf("Novo sal�rio �: %6.2fR$\n", sal_tecn * 1.5);
        break;

    case 2:
        printf("Sal�rio antigo do gerente: ");
        scanf("%f", &sal_gert);
        printf("Novo sal�rio �: %6.2fR$\n", sal_gert * 1.3);
        break;

    case 3:
        printf("Sal�rio antigo dos demais funcion�rios: ");
        scanf("%f", &sal_func);
        printf("Novo sal�rio �: %6.2f\nR$", sal_func * 1.2);
        break;

    default:
        printf("C�digo invalido\n");
        break;

    }
    for (; ;)
    {

        printf("Digite seu c�digo de usu�rio: ");
        scanf("%d", &code);

        switch (code)
        {
        case 1:
            printf("Sal�rio antigo do t�cnico: ");
            scanf("%f", &sal_tecn);
            printf("Novo sal�rio �: %6.2fR$\n", sal_tecn * 1.5);
            break;

        case 2:
            printf("Sal�rio antigo do gerente: ");
            scanf("%f", &sal_gert);
            printf("Novo sal�rio �: %6.2fR$\n", sal_gert * 1.3);
            break;

        case 3:
            printf("Sal�rio antigo dos demais funcion�rios: ");
            scanf("%f", &sal_func);
            printf("Novo sal�rio �: %6.2f\nR$", sal_func * 1.2);
            break;

        default:
            printf("C�digo invalido\n");
            break;

        }
    }

    return 0;
}
