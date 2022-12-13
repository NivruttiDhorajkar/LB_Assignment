// Problem Statement : Accept the number from user and check wheather number is even or odd.
//
// Input : 2
// Output : Number is even.
// 
// Input : 5
// Output : Number is odd.

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL ChkEven(int iNo)
{
    if(iNo % 2 ==0)
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
    int ivalue =0;
    BOOL bRet = FALSE;

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    bRet = ChkEven(ivalue);
    if (bRet == TRUE)
    {
        printf("Number is Even:\n");
    }
    else
    {
        printf("Number is odd");
    }
    return 0;

}