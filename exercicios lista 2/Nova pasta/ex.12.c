#include <stdio.h>

int main(void)
{
    int code;
    printf("Digite seu código de usuário:\n");
    scanf("%d", &code);
    switch (code)
    {
    case 101 :
        printf("Bem vindo vendedor!\n");
        break;

    case 102 :
        printf("Bem vindo atendente!\n");
        break;

    case 103 :
        printf("Bem vindo auxiliar técnico!\n");
        break;

    case 104 :
        printf("Bem vindo assistente!\n");
        break;

    case 105 :
        printf("Bem vindo coordenador de grupo!\n");
        break;

    case 106 :
        printf("Bem vindo gerente!");
        break;

    default:
        printf("Código não reconhecido, tente novamente.\n");
        break;
    }
    for ( ; ; )
    {
    printf("Digite seu código de usuário: \n");
    scanf("%d", &code);
    switch (code)
    {
    case 101 :
        printf("Bem vindo vendedor!\n");
        break;

    case 102 :
        printf("Bem vindo atendente!\n");
        break;

    case 103 :
        printf("Bem vindo auxiliar técnico!\n");
        break;

    case 104 :
        printf("Bem vindo assistente!\n");
        break;

    case 105 :
        printf("Bem vindo coordenador de grupo!\n");
        break;

    case 106 :
        printf("Bem vindo gerente!\n");
        break;

    default:
        printf("Código não reconhecido, tente novamente. \n");
        break;
    }
    }

    return 0;
}
