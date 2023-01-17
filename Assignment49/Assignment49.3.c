/*

Write a progrsm which checks wheather 7th,
15th, 21st, 28th  bit is ON or OFF.

Input : 10 
Outptu : False

Input : 135282752
Output : True

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;
/*
0000    1000    0001    0000    0100    0000    0100    0000
0       8       1       0       4       0       4       0
08104040
0X08104040
*/
bool CheckBit(UINT No)
{
    UINT iMask = 0X08104040;
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
        printf("7th & 15th & 21st & 28th Bit is ON\n");
    }
    else
    {
        printf("7th & 15th & 21st & 28th Bit is OFF\n");
    }

    return 0;
}