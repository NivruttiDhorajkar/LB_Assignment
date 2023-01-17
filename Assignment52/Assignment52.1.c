/*
Write a program which accept one number from user and count 
number of ON bits int it without using % and / operator.

Input : 11
Output : 3

*/

#include<stdio.h>

typedef unsigned int UINT;

int CountON(UINT No)
{
    int iCnt = 0;

    while(No != 0)
    {
        if((No & 1) == 1)
        {
            iCnt++;
        }
        No = No >> 1;
    }
    return iCnt;
}

int main()
{
    UINT Value = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    iRet = CountON(Value);
    printf("ON bits in number %d is:%d\n",Value,iRet);

    return 0;
}