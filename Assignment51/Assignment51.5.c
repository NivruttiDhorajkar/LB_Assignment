/*
Write a program which accept one number from user and toggle
contents of first and last nibble of the number.
Return Modified number.
(Nibble is a group of four bits).

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
Mask1   0000   0000    0000    0000    0000    0000    0000    1111
            


*/
UINT ToggleBit(UINT No)
{
    UINT iMask = 0X0000000f;
    UINT Result = 0;

    Result = No ^ iMask;
    return Result;
}

int main()
{
    UINT Value = 0;
    UINT Ret = 0;

    printf("Enter the Number:\n");
    scanf("%d",&Value);

    Ret = ToggleBit(Value);
    printf("Modified Number is:%d\n",Ret);
    return 0;
}