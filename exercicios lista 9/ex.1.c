#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define tam 50

typedef struct ficha{
    char nome [tam];
    char cidade [tam];
    char rua [tam];
    char bairro [tam];
    int numero, ano, dia;
    char mes [tam];
}ficha;

void le_texto(char str[], char msg[]){
    printf("%s", msg);
    fgets(str, tam, stdin);
    str[strlen(str)-1]='\0'; //remove o \n da string lida com o fgets
}
void le_inteiro(int *numero, char msg[]){
    do{
        printf("%s", msg);
        scanf("%d", numero);
        if(*numero<0){
            printf("O valor deve ser positivo!\n");
        }
    }while(*numero<0);
}

int main ()
{
    int n;
    ficha *info = NULL;
    printf("Deseja armazenar infos de quantas pessoas: ");
    scanf("%d", &n);
    info = (ficha*) malloc(n * sizeof(ficha));
    if (!info)
    {
        printf("Nao foi possivel alocar memoria!");
        return -1;
    }
    else
    {
        for(int i = 0; i < n; i++)
        {
            //setbuf(stdin, 0);
            le_texto(info[i].nome, "Digite o nome: ");
            setbuf(stdin, 0);
            le_texto(info[i].cidade, "Digite a cidade: ");
            setbuf(stdin, 0);
            le_texto(info[i].bairro, "Digite o bairro: ");
            setbuf(stdin, 0);
            le_texto(info[i].rua, "Digite a rua: ");
            setbuf(stdin, 0);
            le_inteiro(&info[i].dia, "Digite o dia de nascimento: ");
            setbuf(stdin, 0);
            le_texto(info[i].mes, "Digite o mes de nascimento: ");
            le_inteiro(&info[i].ano, "Digite o ano de nascimento: ");
            le_inteiro(&info[i].numero, "Digite o numero da casa: ");
        }
        for(int i = 0; i < n; i++)
        {
            printf("\n######################## Exibe dados do %s ########################\n", info[i].nome);
            printf("\tEndereco %s, %s, %s, %d\n\tData de aniversario: %d/%s/%d", info[i].cidade, info[i].bairro, info[i].rua, info[i].numero, info[i].dia, info[i].mes, info[i].ano);
        }
    }
    free(info);
    return 0;
}