// Problem Statement : Write a program which accept number from user and
//  return difference betnween summtion of its all factors and non factors.

// Input :12
// Output : -34     (16-50)

// Input : 10
// Output : -29     (8-37)

#include<stdio.h>

int FactDiff(int iNo)
{
    int iSum=0;
    int iSum1=0;
    int iCnt=0;

    for(iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt) == 0) 
        {
            iSum=iSum+iCnt;
        }
        else //if((iNo % iCnt ) !=0)
        {
            iSum1=iSum1+iCnt;
        }   
    }

    // for(iCnt=1; iCnt<iNo; iCnt++)
    // {
    //     if((iNo % iCnt ) !=0)
    //     {
    //         iSum1=iSum1+iCnt;
    //     }  
   // }
    return iSum-iSum1;

}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    iRet = FactDiff(iValue);

    printf("%d",iRet);
    return 0;
}