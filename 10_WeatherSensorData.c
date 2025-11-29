#include <stdio.h>
int main()
{
    int i, n;
    float tempr[100];
    printf("How many readings ?\n");
    scanf("%d",&n);
    printf("Enter temperature readings: \n");
    for(i=0;i<n;i++)
    {
        scanf("%f",&tempr[i]);
    }
    int N=0,P=0,Z=0;
    for(i=0;i<n;i++)
    {
        if (tempr[i]<0)
        {
            N++;
        }
        else if (tempr[i]>0)
        {
            P++;
        }
        else
        {
            Z++;
        }
    }    

    printf("\nNegative = %d\nPositive =%d\nZero = %d",N,P,Z);
}