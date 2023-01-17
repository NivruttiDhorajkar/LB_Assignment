/*
Write a recursive program which accept number from user and
return its factorial.

Input : 5
Output : 120        (1*2*3*4*5)
*/

#include<stdio.h>

int Factorial(int iNo)
{
    static int iFact = 1;
    static int iCnt = 1;

    if(iCnt <= iNo)
    {
        iFact = iFact * iCnt;
        iCnt++;
        Factorial(iNo);
    }
    return iFact;
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = Factorial(iValue);
    printf("Factorial of %d is: %d\n",iValue,iRet);

    return 0;
}