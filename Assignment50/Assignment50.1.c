/*
Write a program which accept one number from user and OFF 
7th bit of that number if it is on. Return Modified number.

Input : 79
Output : 15

*/

#include<stdio.h>

typedef unsigned int UINT;
/*
1111    1111    1111    1111    1111    1111    1011    1111
f       f       f       f       f       f       b       f
ffffffbf
0Xffffffbf
*/
UINT OFFBit(UINT No)
{
    UINT iMask = 0Xffffffbf;
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