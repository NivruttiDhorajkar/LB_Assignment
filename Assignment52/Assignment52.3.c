/*
Write a program which accept one number from user
and check wheather 9th or 12th bit is ON or OFF.

Input : 257
Output : True

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000    0000    0000    0000    0000    0001    0000    0000
0       0       0       0       0       1       0       0
00000100
0X00000100
*/
bool CheckBit(UINT No)
{
    UINT iMask = 0X00000100;
    UINT iMask1 = 0X00000800;

    UINT Result = 0;
    UINT Result1 = 0;

    Result = No & iMask;
    Result1 = No & iMask1;

    if(Result == iMask)
    {
        return true;
    }
    else if(Result1 == iMask1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    UINT Value = 0;
    bool bRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);
    if(bRet == true)
    {
        printf("9th or 12th bit is ON\n");
    }
    else
    {
        printf("9th or 12th bit is OFF\n");
    }
    return 0;
}