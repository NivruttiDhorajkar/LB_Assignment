// Write a program which accept number from user and display below pattern.

// Input : 5
// Output : *   *   *   *   *   #   #   #   #   #

// Input : 6
// Output : *   *   *   *   *   *   #   #   #   #   #   #

// Input : -5
// Output :  *   *   *   *   *   #   #   #   #   #

// Input : 2
// Output : *   *   #   #

#include<stdio.h>

void Display(int iNo)
{
    if(iNo < 0)
    {
        iNo = -iNo;
    }

    int iCnt=0;

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t",iCnt);
        
    }
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("#\t",iCnt);
        
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Display(iValue);

    return 0;
}