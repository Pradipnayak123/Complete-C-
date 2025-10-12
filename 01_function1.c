#include <stdio.h>
// Function prototype!

int sum(int, int);
//  Function Defination
int sum(int x, int y)
{
    printf("The Sum is %d\n", x + y);
    return x+y;
}

int main()
{
    int a = 2;
    int b = 3;
    // int c = a + b;
    // printf("The Sum is %d\n", c);
     int c = sum(a,b);//Function Call
    printf("%d\n",c);
    int a1 = 3;
    int b1 = 7;
    // int c1 = a1 + b1;
    // printf("The Sum is %d", c1);
    sum(a1,b1);// FUNCTION Call.
    return 0;
}