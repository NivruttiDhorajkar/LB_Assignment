// Write a program which accept one number from user and
// return summation of all its non factors.

// Input : 12
// Output : 50

// Input : 10
// Output : 37

#include<stdio.h>

int SumNonFactors(int iNo)
{
    int iCnt=0;
    int iSum=0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt)!=0)
        {
            iSum=iSum+iCnt;
        }
    }
    return iSum;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=SumNonFactors(iValue);
    printf("Sum of non of factors is:%d\n",iRet);
    return 0;
}