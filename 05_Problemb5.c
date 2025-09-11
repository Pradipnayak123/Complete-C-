#include <stdio.h>

int main()
{
    char ch = 'A';
    printf("The Character  is %c\n", ch);
    // 97,122
    printf("the value of a is %d\n", ch);
    if (ch >= 97 && ch <= 127)
    {
        printf("The Character is Lowercase\n");
    }
    else
    {
        printf("The character is Not Lowercase\n");
    }

    return 0;
}