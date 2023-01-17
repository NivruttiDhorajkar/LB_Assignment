/*
Write a recursive program which accept number from user
and return its reverse number.

Input : 523
Output : 325
*/

#include<stdio.h>

int ReverseX(int iNo)
{
    static int iRev = 0;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo = iNo / 10;
        ReverseX(iNo);
    }
    return iRev;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = ReverseX(iValue);
    printf("Reverse number is:%d\n",iRet);

    return 0;
}