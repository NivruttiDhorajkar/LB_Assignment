/*
Write a program which accept one number from user and 
position from user and ON that bit.
Return modified number.

Input : No:10   Pos:3
Output : 14

*/

#include<stdio.h>

typedef unsigned int UINT;

UINT CheckBit(UINT No, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iMask1 = 0;
    UINT Result = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Position\n");
        return -1;
    }

    iMask1 = iMask << (iPos - 1);

    Result = No | iMask1;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT Position = 0;
    UINT Ret = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    printf("Enter the position of bit u have to check:\n");
    scanf("%d",&Position);

    Ret = CheckBit(Value,Position);
    printf("Modified number is: %d\n",Ret);
    return 0;
}