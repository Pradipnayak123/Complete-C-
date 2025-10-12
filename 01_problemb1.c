#include <stdio.h>
float average(float a, float b,float c);

float average(float a, float b,float c){
return(a+b+c)/3;
}
float main(){
    float a = 2.0 ,b = 4.0 , c= 5.0;
    printf("The Average of a, b and c is %f",average(a,b,c));
    return 0;
}