#include <stdio.h>

int main(){
    int i = 2;
    int *ptr = &i;
    printf("The adress of i is %u\n",&i);
    printf("The Value  of i is %d\n",*ptr);
    return 0;
}