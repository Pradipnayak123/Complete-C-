#include <stdio.h>

void main()
{
    int Td, Tm, Ty;
    int Yd, Ym, Yy;
    int D, M, Y;
    printf("Enter today's Day :\n ");
    scanf("%d", &Td);
    printf("Enter today's Month :\n ");
    scanf("%d", &Tm);
    printf("Enter today's Year :\n ");
    scanf("%d", &Ty);
    printf("Enter your birth Day:\n");
    scanf("%d", &Yd);
    printf("Enter your birth Month:\n");
    scanf("%d", &Ym);
    printf("Enter your birth Year:\n");
    scanf("%d", &Yy);
    if (Td > Yd)
    {
        D = Td - Yd;
    }
    else
    {
        D = Yd - Td;
    }
    if (Tm > Ym)
    {
        M = Tm - Ym;
    }
    else
    {
        M = Ym - Tm;
    }  
    Y = Ty - Yy;
    printf("You are %d Year %d Month %d Day old", Y, M, D);
}