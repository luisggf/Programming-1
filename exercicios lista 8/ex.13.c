    #include <stdio.h>
    #include <stdlib.h>

int main()
{
    int n, *vet = NULL, *ponteiro, *pontaux;

    printf("Digite o numero de elementos: ");
    scanf("%d", &n);
    if (n < 0)
    {
        do{
            printf("Digite um valor positivo!\n");
            scanf("%d", &n);
         }while(n < 0); 

        if (n >= 1)
        {
            vet = (int *) malloc(n * sizeof(int));
            if(vet == NULL)
            {
                    printf("Nao foi possivel alocar memoria.");
                    return -1;
            }
            ponteiro = vet;
            pontaux = vet;
            for (int i = 0; i < n; i++)
            {
                printf("Digite o valor %d do array de inteiros: ", i+1);
                scanf("%d", &ponteiro[i]);
                if (ponteiro[i] > 1)
                {
                    pontaux[i] = ponteiro[i];
                }
                else if (ponteiro[i] < 1)
                {
                    do{
                        printf("Digite um valor positivo!\n");
                        scanf("%d", &ponteiro[i]);
                    }while(ponteiro[i] < 1);
                }

            }
            pontaux = vet;
            printf("Vetor: [");
            for (int i = 0; i < n; i++)
            {
                printf(" %d ", pontaux[i]);
            }
            printf("]");
        }  
    }   
        free(vet);

        return 0;
}
    