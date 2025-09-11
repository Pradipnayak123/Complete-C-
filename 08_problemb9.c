#include <stdio.h>

int main()
{
    int product = 1;
    int i = 1;
    int n = 4;
    while (i<=n)
    {
        product *=i;
        i++;
    }
    printf("The Factorial Of %d is %d",n,product);
    return 0;
}