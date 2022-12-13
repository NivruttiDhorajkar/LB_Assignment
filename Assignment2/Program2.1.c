// Problem Statement : Accept one number from user and print taht number of  on screen.
//
// Input : 5
// Output : *   *   *   *   *

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("*\t");
    }
}

int main()
{   
    int ivalue=0;

    printf("Enter number:\n");
    scanf("%d",&ivalue);

    Display(ivalue);

    return 0;
}