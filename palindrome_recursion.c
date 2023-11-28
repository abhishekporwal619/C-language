#include <stdio.h>
#include <string.h>

// Recursive function to check if a string is palindrome
int isPalindrome(char *str, int start, int end)
{
    // If there is only one character
    if (start >= end)
        return 1;

    // If first and last characters do not match
    if (str[start] != str[end])
        return 0;

    // If there are more than two characters, check if middle substring is also palindrome
    return isPalindrome(str, start + 1, end - 1);
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);

    int len = strlen(str) - 1;

    if (isPalindrome(str, 0, len))
        printf("The string is a palindrome.\n");
    else
        printf("The string is not a palindrome.\n");

    return 0;
}
