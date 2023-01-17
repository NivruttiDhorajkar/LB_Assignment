/*
Write a program which accept one number from user and range of 
positons from user.Toggle all bits from that range.

Input : 897 
Range : 9-13
Output : 7297
*/

#include<stdio.h>

typedef unsigned int UINT;
/*
Mask1   1111    1111    1111    1111    1111    1111    1111    1111
        f       f       f       f       f       f       f       f
        0Xffffffff

Mask2   1111    1111    1111    1111    1111    1111    1111    1111
        f       f       f       f       f       f       f       f
        0Xffffffff

Modified Mask
Mask1   1111    1111    1111    1111    1111    1110    0000    0000
Mask2   0000    0000    0000    0000    0001    1111    1111    1111


*/
UINT ToggleBitRange(UINT No, int iStart, int iEnd)
{
    UINT iMask1 = 0XFFFFFFFF;
    UINT iMask2 = 0XFFFFFFFF;
    UINT iMask = 0;
    UINT Result = 0;

    iMask1 = iMask1 <<(iStart - 1);
    iMask2 = iMask2 >> (32 - iEnd);

    iMask = iMask1 & iMask2;

    Result = No ^ iMask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT Start = 0;
    UINT End = 0;
    UINT Ret = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    printf("Enter starting position of range:\n");
    scanf("%d",&Start);

    printf("Enter ending posiion of range:\n");
    scanf("%d",&End);

    Ret = ToggleBitRange(Value,Start,End);
    printf("Modified Number is:%d\n",Ret);

    return 0;
}