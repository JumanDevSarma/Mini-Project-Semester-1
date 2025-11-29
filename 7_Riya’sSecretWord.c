#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i, len, isPalindrome = 1;

    printf("Enter your word: ");
    scanf("%s", word);

    len = strlen(word);

    for (i = 0; i < len / 2; i++)
    {
        if (word[i] != word[len - i - 1])
        {
            isPalindrome = 0;
            break;
        }
    }

    if (isPalindrome)
    {
        printf("Perfect Secret Word");
    }
    else
    {
        printf("Not a Secret Word");
    }

    return 0;
}
