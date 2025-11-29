#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter number of days: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter exercise times: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Reversed order: ");
    for(i = n - 1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}
