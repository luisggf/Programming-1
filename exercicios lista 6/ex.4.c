#include <stdio.h>
#define tam 50
#include <string.h>

void copy(char orig[])
{
    int cont, i, TAM;
    TAM = strlen(orig);
    char strcopy[tam];
    for(i = 0; i <= TAM; i++)
    {
        strcopy[i] = orig[i];
    }

    printf("String copia: %s", strcopy);

}

int main()
{
    char str[tam];
    printf("Digite a string a ser copiada: ");
    fgets(str, tam, stdin);
    copy(str);
    
    return 0;
}