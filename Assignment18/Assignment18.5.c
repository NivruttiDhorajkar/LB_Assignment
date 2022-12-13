// Accept number from user and display below pattern.

// Input : 8
// Output : 2   4   6   8   10  12  14  16
#include<stdio.h>

void Display(int iNo)
{
    int iCnt=0;
    int i =0 ;

    for(i=2; (iNo!=iCnt); i++)
    {
        if((i % 2) == 0)
        {
            printf("%d\t",i);
            iCnt++;
        }
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