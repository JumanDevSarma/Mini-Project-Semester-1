#include <stdio.h>

int main() 
{
    int n, m;

    printf("Enter no. of students: ");
    scanf("%d", &n);

    printf("Enter no. of days: ");
    scanf("%d", &m);

    int cash[n][m];
    int studentTotal[n];
    int dayTotal[m];

    for (int i = 0; i < n; i++) 
    {
        studentTotal[i] = 0;
    }
    for (int j = 0; j < m; j++) 
    {
        dayTotal[j] = 0;
    }

    printf("Enter Amounts:\n");


    for (int i = 0; i < n; i++) 
    {
        printf("Student %d: ", i + 1);
        for (int j = 0; j < m; j++) 
        {
            scanf("%d", &cash[i][j]);
            studentTotal[i] += cash[i][j];
            dayTotal[j] += cash[i][j];
        }
    }

    printf("\n");

    for (int i = 0; i < n; i++) 
    {
        printf("Student %d total: ₹%d\n", i + 1, studentTotal[i]);
    }

    int maxDayIndex = 0;
    for (int j = 1; j < m; j++) 
    {
        if (dayTotal[j] > dayTotal[maxDayIndex]) 
        {
            maxDayIndex = j;
        }
    }
    printf("\nHighest collection on Day %d\n", maxDayIndex + 1);

    int maxSpend = studentTotal[0];
    for (int i = 1; i < n; i++) 
    {
        if (studentTotal[i] > maxSpend) 
        {
            maxSpend = studentTotal[i];
        }
    }

    printf("Highest spender: ");
    int firstPrinted = 0;

    for (int i = 0; i < n; i++) 
    {
        if (studentTotal[i] == maxSpend) 
        {
            if (firstPrinted) 
            {
                printf(" and ");
            }
            printf("Student %d", i + 1);
            firstPrinted = 1;
        }
    }

    printf("\n");

    return 0;
}

