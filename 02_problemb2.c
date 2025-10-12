#include <stdio.h>
float c2f(float);
float c2f(float c){
   return ((9*c)/5) +32; 
}
int main(){
    float c = 45;
    printf("Celsius to Fahrenheit for  %f is %.3f",c,c2f(c));
    return 0;
}