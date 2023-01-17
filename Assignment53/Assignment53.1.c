/*
Write a recursive program which display below pattern.

Output : *  *   *   *   *

*/

#include<stdio.h>

void Display()
{
    static int iCnt = 1;
    int iNo = 5;

    if(iCnt <= iNo)
    {
        printf("*\t");
        iCnt++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}