// Problem Statement : Write a program which accept one number from user and 
// print that number of even numbers on screen.

// Input : 7
// Output : 2   4   6   8   10  12  14

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCount = 0;
    if (iNo<=0)
    {
        return ;
    }
    for(int i=2; (iNo != iCount); i++)
    {

        if(i % 2 == 0)
        {
            printf("%d\t",i);
            iCount++;
        }
        
    }
}

int main()
{
    int iValue=0;
    printf("ENter number:\n");
    scanf("%d",&iValue);
    PrintEven(iValue);
    return 0;
}