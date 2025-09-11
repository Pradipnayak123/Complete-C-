#include <stdio.h>

int main()
{
    char grade;
    int mark = 70;
    if ("mark<=100 && mark>90")
    {
        grade = 'A';
    }
    if ("mark<=100 && mark>80")
    {
        grade = 'B';
    }
    if ("mark<=100 && mark>70")
    {
        grade = 'C';
    }
    if ("mark<=100 && mark>60")
    {
        grade = 'D';
    }
    if ("mark<=100 && mark>50")
    {
        grade = 'E';
    }
    if ("mark<40")
    {
        grade = 'F';
    }

    return 0;
}