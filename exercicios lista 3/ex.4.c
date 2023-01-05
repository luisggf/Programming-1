#include <stdio.h>

int main()
{
    int cont1, n, cont;
    char p;
    cont = 0;
    cont1 = 0;

    for (int k = 0; k >= -1; k++)
    {
        if (k % 1 == 0)
        {
            printf("Press 'x' to end the program if you like, or anything else to continue: ");
            scanf(" %c", &p);
            getchar();

            if (p == 'x' || p == 'X')
            {
                printf("Program has been shutdown! ");
                break;
            }
        }

        for (int i = 1; i <= 10; i++)
        {
            printf("Input number %d: ", i);
            scanf("%d", &n);

            if (n >= 10 && n <= 20)
            {
                cont++;
            }
            else if (n <= 10 || n >= 20)
            {
                cont1++;
            }
        }
        printf("Numbers between [10,20]: %d \n", cont);
        printf("Numbers that ain't between [10,20]: %d \n", cont1);

    }


    return 0;
}
