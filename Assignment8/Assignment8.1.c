// Write a program which accept number from user and if number is less than 50
// then print small, if it is freater than 50 and less than 100 then print medium,
// it it is greater than 100 then print large.

// Input : 75
// Output : Medium

// Input : 120
// Output :large

// Input : 40
// Output : small

#include<stdio.h>

void Number(int iNo)
{
    if(iNo < 50)
    {
        printf("Smaller Number\n");
    }
    if(iNo >50 && iNo < 100 )
    {
        printf("Medium Number\n");
    }
    if(iNo > 100)
    {
        printf("Large Number\n");
    }
}

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    Number(iValue);
    return 0;
}