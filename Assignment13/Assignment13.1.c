// Write a program which accept number from user 
// and return the count of even digits.

// Input : 2395
// Output : 1

// Input : 1018
// Output : 2

// Input : -1018
// Output : 2

// Input : 8462
// Output : 4

#include<stdio.h>

int CountEvenDigit(int iNo)
{
    if(iNo < 0 )
    {
        iNo = -iNo;
    }

    int iCnt=0;
    int iDigit=0;

    while(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit % 2 == 0)
        {
            iCnt++;
        }
        iNo = iNo / 10;
    }
    return iCnt;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet=CountEvenDigit(iValue);
    printf("Count of even digits is :%d\n",iRet);

    return 0;
}