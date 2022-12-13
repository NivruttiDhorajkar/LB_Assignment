// Write a program which accept distance in kilometer and convert into meter.
// (1 kilometer = 1000 meter)

// Input : 5
// Output : 5000

// Input : 12
// Output : 12000

#include<stdio.h>

int KMtoMEter(int iNo)
{
    int iConvert=0;
    iConvert = iNo * 1000;
    return iConvert;
}

int main()
{
    int iValue=0;
    int iRet=0;

    printf("Enter Distance:\n");
    scanf("%d",&iValue);

    iRet = KMtoMEter(iValue);
    printf("Distance in meter is:%d",iRet);
    return 0;
}