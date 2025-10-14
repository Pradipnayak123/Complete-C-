#include <stdio.h>

void swap(int* ,int*);
void swap(int* a ,int *b){
    int tamp;
    tamp = *a;
   * a = *b;
   * b = tamp;
}
int main(){
    int a = 2,b = 3;
    swap(&a,&b);
    printf("The Value of a is %d And The Value Of b is %d\n",a,b);
    return 0;
}