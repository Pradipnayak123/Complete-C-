#include <stdio.h>

int pass(int* );
int pass(int *a){
    *a = 9;
    return *a;
}

int main(){
    int x = 2;
    pass(&x);
    printf("The Value of x is %d\n",x);
    return 0;
}