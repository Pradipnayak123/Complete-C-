#include <stdio.h>

int main()
{
    int i = 1;
    int sum = 0;
    while (i <= 10)
    {
        sum += i;
        i++;
    }
    printf("The Sum of First 10 Natural Numbers is %d", sum);

    return 0;
}