// Write a program which accept number from user and
// display all its non factors.

// Input : 12
// Output : 5   7   8   9   11

// INput : 13
// Output : 2   3       4   5   6   7   8   9   10  11  12

// Input : 10
// Output : 3   4   6   7   8   9

#include<stdio.h>

void DisplayNonFactors(int iNo)
{
    int iCnt=0;

    for (iCnt=1; iCnt<iNo; iCnt++)
    {
        if((iNo % iCnt )!=0)
        {
            printf("%d\t",iCnt);
        }
    }
}

int main()
{
    int iValue=0;

    printf("enter number:\n");
    scanf("%d",&iValue);

    DisplayNonFactors(iValue);

    return 0;
}