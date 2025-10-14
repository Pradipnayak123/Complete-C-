#include <stdio.h>

int main(){
    int i = 72;
    int*j = &i; // j is a pointing to i ( j is an integer pointer)
    int k = 65;
    printf("The Address of i is %p\n",&i);
    printf("The Address of i is %p\n",j);
    printf("The Address of i is %u\n",&k); // %u is Your unsinged integer.

    printf("The Value At address j is %d\n",*j);
    return 0;
}