/*
Write a recursive program which display below pattern.

Output : a  b   c   d   e   f
*/

#include<stdio.h>

void Display()
{
    static int iCnt = 1;
    int iNo = 6;
    static char ch = 'a';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display();
    }
}

int main()
{
    Display();
    return 0;
}