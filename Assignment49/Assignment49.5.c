/*

Write a progrsm which checks wheather first and last
bit is ON or OFF.
First bit means bit number 1 and last bit means bit number 32.

Input : 10 
Outptu : False

Input : 2147483713
Output : True

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
1000    0000    0000    0000    0000    0000    0000    0001
8       0       0       0       0       0       0       1
80000001
0X80000001
*/
bool CheckBit(UINT No)
{
    UINT iMask = 0X80000001;
    UINT Result = 0;

    Result = No & iMask;

    if(Result == iMask)
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
    bool bRet = 0;
    UINT Value = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    bRet = CheckBit(Value);
    if(bRet == true)
    {
        printf("1st and 32nd Bit is ON\n");
    }
    else
    {
        printf("1st and 32nd Bit is OFF\n");
    }

    return 0;
}