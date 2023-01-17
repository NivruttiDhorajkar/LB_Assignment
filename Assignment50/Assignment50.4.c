/*
Write a program which accept one number from user and toggle
7th and 10th bit of that number of that number. Return Modified number.

Input :137
Output : 713

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
0000    0000    0000    0000    0000    0000    0000    0000
0000    0000    0000    0000    0000    0010    0100    0000
0       0       0       0       0       2       4       0   

00000240
0X00000240
*/

UINT OFFBit(UINT No)
{
    UINT iMask = 0X00000240;
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