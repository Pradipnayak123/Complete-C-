#include <stdio.h>

int main()
{
    float i = 0.0;
    while (i <= 20.0)
    {
        if (i >= 10.0)
        {
            printf("The Value Of i is %.1f\n", i);
        }
        i++;
    }
    return 0;
}