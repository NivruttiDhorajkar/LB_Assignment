/*
Write a program which accept one number, two positions from user
and check wheather bit at first or bit at second position is ON or OFF.

Input : 10  Pos1:2      Pos2:4
Output : True

*/

#include<stdio.h>
#include<stdbool.h>

typedef unsigned int UINT;

bool CheckBits(UINT No, int iPos1, int iPos2)
{
    UINT iMask1 = 0x00000001;
    UINT iMask2 = 0X00000001;

    UINT iMask = 0;
    UINT Result = 0;

    if((iPos1 < 1 ) || (iPos1 > 32) || (iPos2 < 1) || (iPos2 > 32))
    {
        printf("Inavalid position\n");
        return false;
    }

    iMask1 = iMask1 << (iPos1 - 1);
    iMask2 = iMask2 << (iPos2 - 1);

    iMask = iMask1 | iMask2;

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
    UINT Value = 0;
    UINT Position1 = 0;
    UINT Position2 = 0;
    bool bRet = 0;

    printf("Enter the Number:\n");
    scanf("%d",&Value);

    printf("Enter the first position:\n");
    scanf("%d",&Position1);

    printf("Enter the second position:\n");
    scanf("%d",&Position2);

    bRet = CheckBits(Value,Position1,Position2);
    if(bRet == true)
    {
        printf("%d & %d position of bit of Number %d are ON\n",Position1,Position2,Value);
    }
    else
    {
        printf("%d & %d position of bit of Number %d are OFF\n",Position1,Position2,Value);
    }
    return 0;
}