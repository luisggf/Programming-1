#include <stdio.h>
#define tam 100
#include <string.h>


int main()
{
    char str[tam];
    printf("Digite uma palavra: ");
    fgets(str, tam, stdin);
    
    char inverse[tam];
    int s = 0, r = 0;
    r = strlen(str) -1;

    for (int i = 0; i < r; i++)
        inverse[i] = str[r-i-1];

    while(inverse[s] == str[s]) 
        s++;

    printf("Inversa da palavra: %s\n", inverse);

    if (s == r)
        printf("É palindroma");
    else
        printf("Não tem palindromo");


    return 0;
}