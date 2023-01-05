#include <stdio.h>

int main ()
{
    int age, weight;
    printf("Please, input your age: ");
    scanf("%d", &age);
    printf("Please, input your weight: ");
    scanf("%d", &weight);

    if (age <= 67 && weight  >= 50)
    {
        printf("You can donate blood! Congratulations! \n");
    }
    else
    {
        printf("You can't donate blood. \n");
    }
    for (; ;)
    {
        printf("Please, input your age: ");
        scanf("%d", &age);
        printf("Please, input your weight: ");
        scanf("%d", &weight);

        if (age <= 67 && weight  >= 50)
        {
            printf("You can donate blood! Congratulations! \n");
        }
        else
        {
            printf("You can't donate blood.\n");
        }
        // parar repeticao
        if (age == -1 || weight < -1)
        {
            printf("Program has been shutdown");
            break;
        }
    }
    return 0;
}
