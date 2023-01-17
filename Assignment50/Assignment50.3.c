/*
Write a program which accept one number from user and toggle
7th  bit of that number of that number. Return Modified number.

Input : 137
Output : 201

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
0000    0000    0000    0000    0000    0000    0000    0000
0000    0000    0000    0000    0000    0000    0100    0000
0       0       0       0       0       0       4       0   

00000040
0X00000040
*/

UINT OFFBit(UINT No)
{
    UINT iMask = 0X00000040;
    UINT Result = 0;

    Result = No ^ iMask;

    return Result;
}

int main()
{
    UINT Ret = 0;
    UINT Value = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);
    
    Ret = OFFBit(Value);
    printf("Modifies number is:%d\n",Ret);
    
    return 0;
}