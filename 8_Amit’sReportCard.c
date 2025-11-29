#include <stdio.h>

int main()
{
    int n, i, num[100];
    int small, large;

    printf("How many numbers?\n");
    scanf("%d", &n);

    printf("Enter numbers:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    small = large = num[0];  // Initialize both with first number

    for(i = 1; i < n; i++)
    {
        if(num[i] < small)
            small = num[i];

        if(num[i] > large)
            large = num[i];
    }

    printf("Highest = %d\n", large);
    printf("Lowest = %d\n", small);

    return 0;
}
