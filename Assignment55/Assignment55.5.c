/*
Write a recursive program which accept number from user and
return product of digits.

Input : 523
Output : 30     (5*2*3)
*/

#include<stdio.h>

int MultDigit(int iNo)
{
    int iDigit = 0;
    static int iMult = 1;

    if(iNo != 0)
    {
        iDigit = iNo % 10;
        if(iDigit == 0)
        {
            iDigit = 1;
        }
        iMult = iMult * iDigit;
        iNo = iNo / 10;
        MultDigit(iNo);
    }  
    return iMult; 
}
int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);

    iRet = MultDigit(iValue);
    printf("Multiplication of digits is:%d\n",iRet);

    return 0;
}