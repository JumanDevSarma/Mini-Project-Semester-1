#include <stdio.h>

int main() 
{
    int a, i, Prime = 1 ; //prime is kept as true 
    printf("Enter a number (greater than 1): ");
    scanf("%d", &a);

    if (a <= 1) 
    {
        printf("Number must be greater than 1\n");
        return 0;
    }
    else
    {
        for (i = 2; i <= a / 2; i++) 
            {
                if (a % i == 0) 
                {
                Prime = 0; // false
                break;
            }
        }
    }

    if (Prime)
    {
        printf("Prime number.\n");
    }
    else
    {
        printf("Not Prime.\n");
    }

    if (a % 2 == 0)
    {
        printf("Even number.\n");
    }
    else
    {
        printf("Odd number.\n");
    }

    return 0;
}
