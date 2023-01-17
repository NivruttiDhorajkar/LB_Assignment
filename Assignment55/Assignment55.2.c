/*
Write a recursive program which accept number from user and
return summation of digits.

Input : 879
Output : 24     (8+7+9)
*/

#include<stdio.h>

int SummationDigit(int iNo)
{
    static int iDigit = 0;
    static int iSum = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        iSum = iSum + iDigit;
        iNo = iNo / 10;
        SummationDigit(iNo);
    }
    return iSum;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = SummationDigit(iValue);
    printf("Summation of digits is:%d\n",iRet);

    return 0;
}