#include <stdio.h>

int main(){
    int n = 3;
    for (int i = 0; i < n; i++)
    {
        /*this loop runs from0 to 2
        if i= 0 print 1 star
        if i = 1 print 3 stars
        if i = 2 then print 5 stars
         */

         for (int j = 0; j < 2*i+1; j++) // This for loop print (2*i+1)
         {
            printf("*");
         }
 
         printf("\n");// this printf prints new Line.
    }
    
    return 0;
}