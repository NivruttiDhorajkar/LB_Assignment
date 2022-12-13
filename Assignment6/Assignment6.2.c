// Write a program which accept one number from user and
// check wheather that number is greater than 100 or not.

// Input : 101
// Output : Greater

// Input : 39
// Output : Smaller

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL CheckGreater(int iNo)
{
    if(iNo > 100)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iValue=0;
    BOOL bRet=0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    bRet=CheckGreater(iValue);

    if(bRet == TRUE)
    {
        printf("Greater");
    }
    else
    {
        printf("Smaller");
    }

    return 0;
}