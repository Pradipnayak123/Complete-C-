#include <stdio.h>

int main(){
    int i = 5;
    int* j = &i;
    int** k = &j;

    printf("The Value Of i is %d\n",i);
    printf("The Value Of i is %d\n",*j);
    printf("The Value Of i is %d\n",**(&j));
    return 0;
}