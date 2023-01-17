/*
Write a program which accept one number from user and 
ON its first 4 bits. Return Modified number.

Input :73
Output : 79

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
0000    0000    0000    0000    0000    0000    0000    0000
0000    0000    0000    0000    0000    0000    0000    1111
0       0       0       0       0       0       0       f   

0000000f
0X0000000f
*/

UINT OFFBit(UINT No)
{
    UINT iMask = 0X0000000f;
    UINT Result = 0;

    Result = No | iMask;

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