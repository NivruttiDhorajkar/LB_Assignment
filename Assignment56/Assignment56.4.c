/*
Write a recursive program which accept number from user
and return smallest digit.

Input : 87983
Output : 3
*/

#include<stdio.h>

int Minimum(int iNo)
{
    static int iMin = 9;
    int iDigit = 0;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit < iMin)
        {
            iMin = iDigit;
        }
        iNo = iNo / 10;
        Minimum(iNo);
    }
    return iMin;
}

int main()
{
    int iValue = 0;
    int iRet = 0;
    
    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = Minimum(iValue);
    printf("Smallest digit is:%d\n",iRet);

    return 0;
}