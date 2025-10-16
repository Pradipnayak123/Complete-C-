#include <stdio.h>

int main(){
    //POINTER AIRTHMATIC USING INTERGER POINTER;
    // int a = 6;
    // int *ptr = &a;
    // printf("The Address of a is %d\n",&a);
    // printf("The Address of a is %d\n",ptr);
    // ptr++;
    // printf("The Value of ptr is %d\n",ptr);// The Important things is ptr increment how much time = the data type with ptr how much byte occupies .
    // return 0;


 //POINTER AIRTHMATIC USING CHARACTER POINTER;
    char a = 'a';
    char *ptr = &a;
    printf("The Address of a is %u\n",&a);
    printf("The Address of a is %u\n",ptr);
    ptr++;
    printf("The Value of ptr is %u\n",ptr);
    return 0;
}