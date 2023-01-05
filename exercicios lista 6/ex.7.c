#include <stdio.h>
#include <string.h>
#define tam 100

void strins (char str[], char c, int pos)
{
    char str_mod[tam];
    int j = strlen(str);
    int k = 0;
    for(int i = 0; i < j; i++)
    {
        str_mod[i] = str[i];
    }
    str_mod[pos-1] = c;

    printf("String alterada: %s\n", str_mod);
    printf("String original: %s\n", str);

}

int main()
{
    char string[tam], busca;
    int posicao;
    printf("Digite uma frase: ");
    fgets(string, tam, stdin);
    printf("Digite uma letra e uma posição para modificar na frase: ");
    if (posicao < 0)
    {
        printf("Numero invalido.");
    }
    scanf(" %c%d", &busca, &posicao);
    strins(string, busca, posicao);

    
    return 0;
}