/*

Write a progrsm which checks wheather 7th,
8th & 9th bit is ON or OFF.

Input : 10 
Outptu : False

Input : 
Output : True

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000    0000    0000    0000    0000    0001    1100    0000
0       0       0       0       0       1       c       0
000001c0
0X000001c0
*/
bool CheckBit(UINT No)
{
    UINT iMask = 0X000001c0;
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
        printf("7th & 8th & 9th Bit is ON\n");
    }
    else
    {
        printf("7th & 8th & 9th Bit is OFF\n");
    }

    return 0;
}