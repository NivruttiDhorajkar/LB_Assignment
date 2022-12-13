// Write a program which accept range from user and return addition 
// of all numbers in between that range.
// (Range should contains positive numbers only)

// Input : 23   30
// Output : 212

// Input : 10   18
// Output : 126

// Input : -10  2
// Output : Invalid Range

// Input : 90   18
// Output : Invalid Range

#include<stdio.h>

int AdditionOfRange(int iStart, int iEnd)
{
    if((iStart < 0) || (iStart > iEnd))
    {
        printf("Invalid range:\n");
    }
    
    int iCnt=0;
    int iSum=0;

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        iSum = iSum + iCnt;
    }
    return iSum;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    int iRet=0;

    printf("Enter starting number:\n");
    scanf("%d",&iValue1);

    printf("Enter ending number:\n");
    scanf("%d",&iValue2);

    iRet = AdditionOfRange(iValue1,iValue2);
    printf("Addition of range is:%d",iRet);

    return 0;
}