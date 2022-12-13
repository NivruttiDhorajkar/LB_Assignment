// Write a program which returns difference between Even factorial and
// Odd factorial of given number.

// Input : 5
// Output : -7      (8-15)

// Input : -5
// Output : -7      (8-15)

// Input : 10
// Output : 2895    (3840-945)

#include<stdio.h>

int FactorialDifference(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    int iCnt=0;
    int iEvenFact=1;
    int iOddFact=1;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        if(iCnt % 2 == 0)
        {
            iEvenFact = iEvenFact * iCnt;
        }
        else
        {
            iOddFact = iOddFact * iCnt;
        }
    }
    return iEvenFact-iOddFact;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactorialDifference(iValue);
    printf("Factorial Difference is:%d",iRet);

    return 0;
}