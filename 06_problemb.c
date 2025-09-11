#include <stdio.h>

int main()
{
    int a = 4, b = 6, c = 9, d = 12;
    if (a > b && a > c && a > d)
    {
        printf("The greatest of all is %d\n", a);
    }
    if (b > a && b > c && b > d)
    {
        printf("The greatest of all is %d\n", b);
    }
    if (c > b && c > a && c > d)
    {
        printf("The greatest of all is %d\n", c);
    }
    if (d > b && d > c && d > a)
    {
        printf("The greatest of all is %d\n", d);
    }
    return 0;
}