#include <stdio.h>
#include <string.h>
#define tam 100

void palim(char orig[])
{
    char palin[tam], copy[tam], orig1[tam];
    int k, j, o = 0, l;
    orig[strlen(orig) - 1] = '\0';
    k = strlen(orig);
    strcpy(orig1, orig);
    strrev(orig1);
    for (int i = 0; i < k; i++)
    {
        if (orig[i] != ' ')
        {
            copy[o] = orig[i];
            o++;
        }
    }

    copy[o] = '\0';
    l = strlen(copy);

    strcpy(palin, copy);
    strrev(palin);
    int x = strlen(palin);

    for (int i = 0; i < l; i++)
    {
        if (copy[i] == palin[i])
        {
            j++;
        }
    }
    if (j == l)
    {
        printf("%s é palindroma", orig);
    }
    else
        printf("%s não é palindroma. \nSua inversa é: %s", orig, orig1);
}

int main()
{
    char str[tam];
    printf("Digite uma string: ");
    fgets(str, tam, stdin);
    palim(str);

    return 0;
}