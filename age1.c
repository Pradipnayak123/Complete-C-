#include <stdio.h>

int main()
{
    int D, M, Y;
    int Td = 16, Tm = 9, Ty = 2025; 
    int Yd = 19, Ym = 6, Yy = 2007;  
    D = Yd - Td;
    M = Tm - Ym;
    Y = Ty - Yy;
    printf("%d Day, %d Month and %d Year is \n", D, M, Y);
    return 0;
}