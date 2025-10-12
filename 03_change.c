#include <stdio.h>
int change(int a);

int change(int a){
    a = 77;//Misnomer b ka copy  a mai assing hogi na ki b 
    return 0;
}

int main(){
    int b = 22;
    change(b);//The value of b Remains 22.
    printf(" b is %d",b);

    return 0;
}