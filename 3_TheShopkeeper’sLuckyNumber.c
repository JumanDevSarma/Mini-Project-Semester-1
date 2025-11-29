#include<stdio.h>
int main()
{
    int x;
    printf("Enter your number: ");
    scanf("%d",&x);

    if (x % 2 == 0)
    {
        if (x % 5 == 0)
        {
            printf("Even number\nDivisible by 5");
        }
        else
        {
            printf("Even number\nNot divisible by 5");
        }
    }
    else
    {
        if (x % 5 == 0)
        {
            printf("Not even\nDivisible by 5");
        }
        else
        {
            printf("Not even\nNot divisible by 5");
        }
    }

    return 0;
}
