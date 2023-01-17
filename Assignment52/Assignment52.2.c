/*
Write a program which accept two numbers from user and
display position of coommon ON Bits from that two numbers.

Input : No1: 10 (1010)   No2: 15 (1111)
Output : 2    4

*/

#include<stdio.h>

typedef unsigned int UINT;

void DisplayBits(UINT No1, UINT No2)
{
    UINT Digit1 = 0;
    UINT Digit2 = 0;

    while(No1 != 0)
    {
        Digit1 = No1 % 2;
        printf("%d",Digit1);
        No1 = No1 / 2;
    }
    printf("\n");

    while(No2 != 0)
    {
        Digit2 = No2 % 2;
        printf("%d",Digit2);
        No2 = No2 / 2;
    }
    printf("\n");
}

UINT CountONFirstNumber(UINT No1)
{
    int iCnt = 0;

    while(No1 != 0)
    {
        if((No1 & 1 ) == 1)
        {
            iCnt++;
        }
        No1 = No1 >> 1;
    }
    return iCnt;
}

UINT CountONSecondNumber(UINT No2)
{
    int iCnt = 0;

    while(No2 != 0)
    {
        if((No2 & 1 ) == 1)
        {
            iCnt++;
        }
        No2 = No2 >> 1;
    }
    return iCnt;
}

int main()
{
    UINT Value1 = 0;
    UINT Value2 = 0;
    UINT Ret = 0;

    printf("Enter the first number:\n");
    scanf("%d",&Value1);

    printf("Enter the second number:\n");
    scanf("%d",&Value2);

    DisplayBits(Value1, Value2);

    Ret = CountONFirstNumber(Value1);
    printf("ON Bits in number %d is : %d\n",Value1,Ret);

    Ret = CountONSecondNumber(Value2);
    printf("ON Bits in number %d is : %d\n",Value2,Ret);

    return 0;

}