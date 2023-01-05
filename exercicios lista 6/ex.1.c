#include <stdio.h>
#include <string.h>
#define tam 50

int strichr (char str[], char c)
{
    int k = strlen(str);
    int armz;

    for (int i = 0; i < k; i++)
    {
        if (str[i] == c)
            armz = i+1;      
    }
    return armz; 
}

int main ()
{
    char string[tam], busca;
    int pos;
    printf("Digite a string: ");
    fgets(string, tam, stdin);
    printf("Digite o termo a ser buscado: ");
    scanf(" %c", &busca);
    pos = strichr(string, busca);
    printf("%c aparece na posição %d da string %s. ", busca, pos, string);

    return 0;
}