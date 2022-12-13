// Write aprogram which accept one number from user  and 
// display its multiplication of factors.

// Input : 12
// utput : 144      (1*2*3*4*6)

// Input : 13
// Output : 1       (1)

// Input : 10
// Output : 10      (1*2*5)

#include<stdio.h>

int MultFact(int iNo)
{
    int iCnt=0;
    int iMult=1;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if(iNo % iCnt == 0)
        {
            iMult= iMult * iCnt;
        }
    }
    return iMult;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    iRet = MultFact(iValue);
    printf("Multiplication of factor is:%d\n",iRet);

    return 0;
}