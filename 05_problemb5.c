#include <stdio.h>

int avg(int, int);
int avg(int a, int b)
{
    return (a + b) / 2.0;
}
int sum(int, int);
int sum(int x, int y)
{
    // printf("The sum is %d",x,y);
    return x + y;
}
int main()
{
    int a = 4, b = 6;
    printf("The sum of a and b is %d\n", sum(a, b));
    printf("The Average of a and b is %d\n", avg(a, b));
    return 0;
}