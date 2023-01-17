/*
Write a program which accept one number from user and OFF 
7th and 10th bit of that number of that number. Return Modified number.

Input : 577
Output : 1

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
1111    1111    1111    1111    1111    1101    1011    1111
f       f       f       f       f       d       b       f
fffffdbf
0Xfffffdbf
*/

UINT OFFBit(UINT No)
{
    UINT iMask = 0Xfffffdbf;
    UINT Result = 0;

    Result = No & iMask;

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