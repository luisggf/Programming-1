#include <stdio.h>
#include <string.h>
#define tam 100

int c_vog(char string[])
{
    int j = 0, k;
    k = strlen(string);
    for(int i = 0; i < k; i++)
    {
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'E' || string[i] == 'e' || string[i] == 'i' || string[i] == 'I' || string[i] == 'O' || string[i] == 'o' || string[i] == 'U' || string[i] == 'u')
            j++;
    }
    return j;
}

int main()
{
    char str[tam];
    int num_vog;
    printf("Digite uma frase: ");
    fgets(str, tam, stdin);
    num_vog = c_vog(str);
    str[strlen(str) -1] = '\0';
    printf("N de vogais em %s: %d", str, num_vog);

    return 0;
}