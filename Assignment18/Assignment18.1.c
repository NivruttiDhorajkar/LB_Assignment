// Accept number from user and display below pattern.

// Input : 5
// Output : A   B   C   D   E

#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    char Ch = 'A';

    for(iCnt=1; iCnt<=iNo; iCnt++)
    {
        printf("%c\t",Ch);
        Ch++;
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number:\n");
    scanf("%d",&iValue);
    Display(iValue);
    return 0;
}