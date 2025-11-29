#include <stdio.h>

int main()
{
    int A[10][7];
    int i, j;

    printf("Enter attendance for 10 students (7 days each):\n");

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 7; j++)
        {
            scanf("%d", &A[i][j]);
        }
    }

    int studentTotal[10] = {0};
    int dayTotal[7] = {0};

    for(i = 0; i < 10; i++)
    {
        for(j = 0; j < 7; j++)
        {
            studentTotal[i] += A[i][j];
            dayTotal[j] += A[i][j];
        }
    }

    int maxAttendance = studentTotal[0];
    int maxStudent = 1; 

    for(i = 1; i < 10; i++)
    {
        if(studentTotal[i] > maxAttendance)
        {
            maxAttendance = studentTotal[i];
            maxStudent = i + 1;
        }
    }

    int minDay = 1;
    int minAttendance = dayTotal[0];

    for(j = 1; j < 7; j++)
    {
        if(dayTotal[j] < minAttendance)
        {
            minAttendance = dayTotal[j];
            minDay = j + 1;
        }
    }

    printf("\nWeekly Attendance Summary\n");
    printf("-------------------------\n\n");

    printf("Total Present Days:\n");
    for(i = 0; i < 10; i++)
    {
        printf("Student %d: %d\n", i + 1, studentTotal[i]);
    }

    printf("\nStudent with Highest Attendance: Student %d (%d Days)\n", maxStudent, maxAttendance);
    printf("\nDay with Lowest Overall Attendance: Day %d\n", minDay);

    return 0;
}
