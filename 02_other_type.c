#include <stdio.h>

int main(){
    char i = 'A';
    char*j = &i; // j is a pointing to i ( j is an character  pointer)
    float k = 6.234;
    float* k1 = &k;
    printf("The Address of i is %p\n",&i);
    printf("The Address of i is %p\n",j);
    printf("The Address of i is %u\n",&k); // %u is Your unsinged integer.

    printf("The Value At address j is %d\n",*j);
    return 0;
}