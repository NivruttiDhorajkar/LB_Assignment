/*
Write a recursive program which display below pattern.

Output : 5  4   3   2   1
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 5;
    int iNo = 0;
    if(iNo < iCnt)
    {
        printf("%d\t",iCnt);
        iCnt--;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}