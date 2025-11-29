#include <stdio.h>
int main()
{
    int i, n, P=0, A=0, attendance[n];
    printf("How many students? \n");
    scanf("%d",&n);
    printf("\nEnter Attendance: \n");

    for(i=0;i<n;i++)
    {
        printf("Student %d :",i+1);
        scanf("%d",&attendance[i]);
    }

    printf("\n\nAttendance:\n");

    for(i=0;i<n;i++)
    {
        if (attendance[i]<1)
        {
            P++;
        }
        else
        {
            A++;
        }
    }

    printf("Present: %d\nAbsent: %d",P,A);

    return 0;
}