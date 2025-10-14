#include <stdio.h>

int sum(int,int);
int sum(int a,int b){
    a = 6;//Sum Function Cannot Change x Using a because Copy of x is provided to Sum in a.
    return a+b;
}
int main(){
    int x = 4,y = 3;
    printf("The Sum of 1 and 6 is %d\n",sum(x,y));
return 0;
}