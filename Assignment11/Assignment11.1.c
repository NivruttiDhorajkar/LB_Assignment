// Write a program which accept range from user and 
// display all numbers in betn that range.

// Input : 23   35
// Output : 23  24  25  26  27  28  29  30  31  32  33  34  35

// Input : 10   18
// Output : 10  11  12  13  14  15  16  17  18

// Input : 10   10  
// Output : 10

// Input : 90   18
// Output : Invalid Range

#include<stdio.h>

void DisplayRange(int iStart, int iEnd)
{
    if(iStart > iEnd)
    {
        printf("Invalid Range:\n");
    }
    
    int iCnt=0;

    for(iCnt=iStart; iCnt<=iEnd; iCnt++)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue1=0;
    int iValue2=0;

    printf("Enter starting point:\n");
    scanf("%d",&iValue1);

    printf("Enter ending point:\n");
    scanf("%d",&iValue2);

    DisplayRange(iValue1,iValue2);

    return 0;
}