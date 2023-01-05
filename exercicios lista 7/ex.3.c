#include <stdio.h>
#include <string.h>
#define tam 50

void cont_char(char str[tam])
{
    int soma_par = 0, soma_imp = 0, soma_tot = 0, tamanho;
    float perc1, perc2;
    tamanho = strlen(str) -1;

    for(int i = 0; i < tamanho; i++)
    {
        soma_tot++;
        if (str[i] == 'a' || str[i] == 'A' || str[i] == 'E' || str[i] == 'e' || str[i] == 'i' || str[i] == 'I' || str[i] == 'O' || str[i] == 'o' || str[i] == 'U' || str[i] == 'u')
            soma_par++;
        else if(str[i] != 'a' || str[i] != 'A' || str[i] != 'E' || str[i] != 'e' || str[i] != 'i' || str[i] != 'I' || str[i] != 'O' || str[i] != 'o' || str[i] != 'U' || str[i] != 'u' || str[i] != ' ')
            soma_imp = soma_tot - soma_par;
    }
    perc1 = (float)soma_par / soma_tot;
    perc2 = (float)soma_imp / soma_tot;
    str[strlen(str) -1] = '\0';
    printf(" A string: %s ", str);
    printf("possui %d vogais e %.2f porcento do tamanho da string ", soma_par, perc1*100);
    printf("e tambem possui %d consoantes e %.2f porcento do tamanho da string\n", soma_imp, perc2*100);


}

int main ()
{
    char string[tam];
    printf("Digite a string: ");
    fgets(string, tam, stdin);
    cont_char(string);
    return 0;
}