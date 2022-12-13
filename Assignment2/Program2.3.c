// Problem Statement: Accept the number from user if number is less than 10 then print "Hello" otherwise print "Demo".

// Input : 5
// Output : HEllo

// Input : 15
// output : Demo

#include<stdio.h>

void Display(int iNo)
{
    if(iNo<10)
    {
        printf("Hello");
    }
    else
    {
        printf("Demo");
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