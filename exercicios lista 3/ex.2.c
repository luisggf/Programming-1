#include <stdio.h>

int main()
{
    int i, num, greater;
    char j;
    greater = 0;

    for (int i = 0; i >= -1; i++)
    {

        if (i % 1 == 0)
        {
            printf("Do you wish to run the program? Press (x) if not. ");
            scanf(" %c", &j);
            getchar();
        }
        if (j == 'x' || j == 'X')
        {
            printf("Program has been shut down");
            break;
        }
        else if (j != 'x' || j != 'X')
        {
            for (i = 1; i <= 10; i++)
            {
                printf("Input a number: %d: ", i);
                scanf("%d", &num);
                if (num > greater)
                {
                    greater = num;
                }
                else if (num < 0)
                {
                    printf("Invalid number.");
                }
            }
        }
        printf("The greatest between those are: %d\n", greater);
    }
        return 0; 
}