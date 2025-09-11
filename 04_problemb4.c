#include <stdio.h>

int main(){
    int year;
    printf("Enter Year: \n");
    scanf("%d",&year);
    if ((year % 400 == 0) || (year % 4 == 0 && year % 100 != 0)) {
        printf("This is a Leap Year");
    }
    else {
        printf("This is not a Leap Year");
    }
    return 0;
}