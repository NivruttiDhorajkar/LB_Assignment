// Write a program which accept number from user and
// check wheather it contains 0 in it or not.

// Input : 2395
// Output : There is no Zero

// Input : 1018
// Output : It contains Zero

// Input : 9000
// Output : It contains Zero

// Input : 10687
// Output : It contains Zero

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckZero(int iNo)
{
    if (iNo == 0)
    {
        return TRUE;
    }

    while(iNo > 0)
    {
        if(iNo % 10 == 0)
        {
            return TRUE;
        }
        iNo = iNo /10;
    }
    return FALSE;
   
}

int main()
{
    int iValue=0;
    BOOL bRet=0;

    printf("Enter Number:\n");
    scanf("%d",&iValue);

    bRet = CheckZero(iValue);

    if(bRet == TRUE)
    {
        printf("Number contains zero:\n");
    }
    else
    {
        printf("Number is NOT contain Zero:\n");
    }
    return 0;
}