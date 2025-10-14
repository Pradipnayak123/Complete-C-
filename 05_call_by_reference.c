#include <stdio.h>

int sum(int *, int *);
//Sum Should Change The Value Of x.
int sum(int *a, int *b)
{
    *a = 9;
    return *a + *b;
}
int main()
{
    int x = 4, y = 3;
    printf("The Sum of 1 and 6 is %d\n", sum(&x, &y));
    printf("the value of x is %d\n",x);
    return 0;
}