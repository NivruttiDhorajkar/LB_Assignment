// Accept amount in US dollar and
// return its corresponding value in Indian currency.

// Input : 10
// Output : 700

// INput : 3
// Output : 270

// Input : 1200
// Output : 84000

#include<stdio.h>

int DollarToINR(int iNo)
{
    int INR=0;

    INR = iNo * 70;

    return INR;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet =DollarToINR(iValue);

    printf("Value in INR is %d",iRet);

    return 0;
}