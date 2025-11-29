#include <stdio.h>

int main()
{
    int n, i;
    int arr[100];
    int profit = 0, loss = 0, net;

    printf("Enter number of days: ");
    scanf("%d", &n);

    printf("Enter profit/loss values:\n");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);

        if(arr[i] > 0)
            profit += arr[i];
        else
            loss += -arr[i]; // convert negative loss to positive
    }

    net = profit - loss;

    printf("\nTotal Profit: %d", profit);
    printf("\nTotal Loss: %d", loss);
    printf("\nNet Balance: %d\n", net);

    return 0;
}
