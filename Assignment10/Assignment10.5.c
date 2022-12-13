// Write a program which accept area in square feet and 
// convert it into square meter.
// (1 square feet = 0.0929 square meter)

// Input : 5
// Output : 0.464515

// Input : 7
// Output : 0.650321

#include<stdio.h>

double SquareMeter(int iNo)
{
    float fSquare=0;
    float fCnt=0.0929;
    fSquare = iNo * fCnt;
    return iSquare;
}

int main()
{
    int iValue =0;
    double dRet=0;

    printf("Enter area in square feet:\n");
    scanf("%d",&iValue);

    dRet = SquareMeter(iValue);
    printf("Youe enterd area in square meter is :%f ",dRet);
    return 0;
}