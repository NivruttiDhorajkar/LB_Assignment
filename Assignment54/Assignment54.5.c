/*
Write a recursive program which display below pattern.

Input : 6
Output : A   B   C   D   E   F
*/

#include<stdio.h>

void Display(int iNo)
{
    static int iCnt = 1;
    static char ch = 'a';

    if(iCnt <= iNo)
    {
        printf("%c\t",ch);
        iCnt++;
        ch++;
        Display(iNo);
    }

    
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}