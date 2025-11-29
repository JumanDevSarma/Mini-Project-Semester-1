#include <stdio.h>

int main() 
{
    int marks[5][3];  // 5 students, 3 subjects
    int i, j;         // i for students, j for subjects
    int highest[3];

    printf("Enter marks of 5 students in 3 subjects:\n");

    for (i = 0; i < 5; i++) 
    {
        printf("\nStudent %d:\n", i + 1);
        for (j = 0; j < 3; j++) 
        {
            printf("Marks of Subject %d: ", j + 1);
            scanf("%d", &marks[i][j]);
        }
    }
    
    printf("\nHighest marks in each subject:\n");

    // finding highest marks for each subject
    for (j = 0; j < 3; j++) 
    {
        highest[j] = marks[0][j]; // assuming the first student has highest
        
        for (i = 1; i < 5; i++) 
        {
            if (marks[i][j] > highest[j]) // comparing with others
            {
                highest[j] = marks[i][j];
            }
        }

      printf("Subject %d: %d\n", j + 1, highest[j]);
    }

    return 0;
}
