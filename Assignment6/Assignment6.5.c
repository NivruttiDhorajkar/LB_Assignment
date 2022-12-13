// Write a program which accept total marks & obtaines marks from user and
// calculate percentage

// Input : 1000     745
// Output : 74.5%

#include<stdio.h>

float Percentage(float fNo1, float fNo2)
{
    float fPercentage=0.0;
    
    fPercentage = fNo2 / fNo1 * 100 ;
    
    return fPercentage;
}

int main()
{
    int iValue1=0;
    int iValue2=0;
    float fRet=0.0f;

    printf("Enter total marks:\n");
    scanf("%d",&iValue1);

    printf("Enter obtained marks:\n");
    scanf("%d",&iValue2);

    fRet=Percentage(iValue1,iValue2);
    printf("Percentage is:%f",fRet);

    return 0;
}
