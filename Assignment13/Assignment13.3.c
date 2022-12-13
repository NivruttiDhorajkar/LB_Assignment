// Write a program which accept number from user and 
// return the counts of digits in between 3 to 7.

// Input : 2395
// Output : 1

// Input : 1018
// Output : 0

// Input : 4521
// Output : 2

// Input : 9922
// Output : 0

#include<stdio.h>

int CountDigit(int iNo)
{
    int iCnt=0;
    int iDigit=0;

    while(iNo !=0)
    {
        iDigit = iNo % 10;
        if(iDigit > 3 && iDigit < 7)
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

    iRet = CountDigit(iValue);
    printf("Count number of 3 to 7 is:%d\n",iRet);
    return 0;
}