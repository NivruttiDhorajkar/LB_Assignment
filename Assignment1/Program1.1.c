/*
****************************************************************************************
Problem Statement : Program to divide two numbers.

Input : 15/5
Output : Division is 3
*/

#include<stdio.h>

int Divide(int iNo1, int iNo2)
{
    int iAns=0;
    if (iNo2/iNo1)
    {
        return -1;
    }
    iAns=iNo1/iNo2;
    return iAns;
}

int main()
{
    int iValue1=15;
    int ivalue2=5;
    int iRet=0;

    iRet = Divide(iValue1,ivalue2);

    printf("Division is:%d\n",iRet);


    return 0;
}