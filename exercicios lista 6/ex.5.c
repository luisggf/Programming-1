#include <stdio.h>
#include <string.h>
#define tam 100


void elimina_spc(char orig[])
{
    char dest[tam];
    int j = 0, t;
    // t armazena quantas letras a palavra tem
    t = strlen(orig);
    for (int i = 0; i < t; i++)
    {
        if (orig[i] != ' ')
        {
            dest[j] = orig[i];
            j++;
        }
    }    
    
    printf("String original: %s\n", orig);   
    printf("String sem espaços em branco: %s\n", dest);   
}

int main()
{
    char str[tam], str_alterada[tam];
    printf("Digite a string: ");
    fgets(str, tam, stdin);
    elimina_spc(str);

    return 0;
}


