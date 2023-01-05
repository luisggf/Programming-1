#include <stdio.h>
#include <string.h>
#define tam 100

void linp(char string[])
{
    int j = 0, k;
    char linp1[tam];
    k = strlen(string);
    for(int i = 0; i < k; i++)
    {
        linp1[i] = string[i];
        if (string[i] == 'a' || string[i] == 'A' || string[i] == 'E' || string[i] == 'e' || string[i] == 'i' || string[i] == 'I' || string[i] == 'O' || string[i] == 'o' || string[i] == 'U' || string[i] == 'u')
            linp1[i] = 'p';
            
    }
    linp1[k] = '\0';
    printf("String alterada: %s", linp1);
    
}

int main()
{
    char str[tam];
    int num_vog;
    printf("Digite uma frase: ");
    fgets(str, tam, stdin);
    linp(str);
   
    return 0;
}