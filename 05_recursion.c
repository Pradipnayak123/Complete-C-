#include <stdio.h>

int factorial(int);

//5! = 5 x 4 x 3 x 2 x 1 
//4! = 4 x 3 x 2 x 1 
//3! = 3 x 2 x 1 
//n! = 1 x 2 x 3 x 4 x 5 ........ (n-1) x n 

int factorial(int n){
    if(n == 1 || n == 0){ // base condition.
        return 1;
    }
    return factorial(n-1)*n;
}
int main(){
    int a = 3;
    printf("The Value of %d is %d",a,factorial(a));
    return 0;
}