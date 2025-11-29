#include<stdio.h>

int main()
{   
    int i, num;
    float sum = 0, avg;
    
    printf("Enter no. of students: ");
    scanf("%d", &num);

    float m[num];

    printf("Enter marks: ");
    for(i = 0; i < num; i++)
    {
        scanf("%f", &m[i]);
    }

    for(i = 0; i < num; i++)
    {
        sum += m[i];
    }

    avg = sum / num;

    printf("Total marks = %.2f\n", sum);
    printf("Average Marks = %.2f\n", avg);

    return 0;
}
