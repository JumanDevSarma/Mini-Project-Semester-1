#include<stdio.h>
int main()
{
    int a,b,x,y,temp,gcd,lcm;
    printf("Enter the lenghts of the two plnks:\n");
    scanf("%d %d",&a, &b);
    if(a>b) //assigning the bigger number to x
    {
    x=a;
    y=b;
    }
    else
    {
    x=b;
    y=a;
    }
    while (y!=0)
    {
        temp = y;
        y = x % y;
        x = temp;
    }
    gcd=x;
    lcm=(a*b)/gcd;
    printf("GCD=%d\n",gcd);
    printf("LCM=%d\n",lcm);
return 0;
}