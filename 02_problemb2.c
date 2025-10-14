#include <stdio.h>

int returning_5(int *ptr){
printf("The Value Of ptr is %d\n", ptr);
printf("The Value at ptr is %d\n", *ptr);
return 5;
}
int main()
{
    int i = 2;
    int *ptr = &i;
    printf("The address of i is %u\n", &i);
    returning_5(ptr);
    return 0;
}