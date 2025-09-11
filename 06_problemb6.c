#include <stdio.h>

int main()
{
    // USING DO WHILE JOOP : 
   /*int i = 1;
    int sum = 0;
    do{
        sum += i;
        i++;
    }
    while (i <= 10);
    */
   //USING FOR LOOP :
   int sum = 0;
   for(int i = 1; i<=10; i++){
    sum +=i;
   }
    
    printf("The Sum of First 10 Natural Numbers is %d", sum);

    return 0;
}