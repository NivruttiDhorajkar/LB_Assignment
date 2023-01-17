/*
Write a program which accept one number from user and 
position from user and check wheather bit at that position 
is ON or OFF. If bit is ON then return TRUE otherwise return FALSE.

Input : No:10   Pos:2
Output : TRUE

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBit(UINT No, int iPos)
{
    UINT iMask = 0X00000001;
    UINT iMask1 = 0;
    UINT Result = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Position\n");
        return false;
    }

    iMask1 = iMask << (iPos -1);

    Result = No & iMask1;
    if(Result == iMask1)
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
    UINT Position = 0;
    bool bRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&Value);

    printf("Enter the position of bit u have to check:\n");
    scanf("%d",&Position);

    bRet = CheckBit(Value,Position);
    if(bRet == true)
    {
        printf("%d position is ON\n",Position);
    }
    else
    {
        printf("%d position is OFF\n",Position);
    }
    return 0;
}