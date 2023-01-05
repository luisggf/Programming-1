#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define TAM 50

void separa_string(char str[], char vogais[], char cons[])
{
    int tam;
    tam = strlen(str);

    for(int i = 0; i < tam; i++)
    {
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
            vogais[i] = str[i];
        else if(str[i] != 'a' || str[i] != 'A' || str[i] != 'E' || str[i] != 'e' || str[i] != 'i' || str[i] != 'I' || str[i] != 'O' || str[i] != 'o' || str[i] != 'U' || str[i] != 'u' || str[i] != ' ' || str[i] != '\0')
            cons[i] = str[i];
    }
    int tam1, tam2;
    tam1 = strlen(cons);
    tam2 = strlen(vogais);
    vogais[tam2] = '\0';
    cons[tam1] = '\0';
    str[strlen(str)-1] = '\0';
    vogais[strlen(vogais)-1] = '\0';
    cons[strlen(cons)-1] = '\0';
    printf("\n String vogal: %s", vogais);
    printf("\n String consoante: %s", cons);
    printf("\n String original: %s", str);

}

int main ()
{
    char string[TAM], vog[TAM], conso[TAM];
    printf("Digite a string: ");
    fgets(string, TAM, stdin);
    separa_string(string, vog, conso);

    
    

    return 0;
}