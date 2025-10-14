#include <stdio.h>

int sum(int *);
//Sum Should Change The Value Of x.
int sum(int *a)
{
    *a = 9;
    return *a;
}
int main()
{
    int x = 4;
    printf("the value of x is %d\n",x);
    return 0;
}