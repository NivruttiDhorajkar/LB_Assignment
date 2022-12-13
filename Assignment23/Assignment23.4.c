/*
Problem statement : Accept character from user and 
check wheather it is smaller or not.(a-z)

Input : g
Output : TRUE

Input : F
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckSmaller(char ch)
{
    if((ch >='a') && (ch <='z'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char Value = '\0';
    bool bRet = false;

    printf("Enter the character:\n");
    scanf("%c",&Value);

    bRet = CheckSmaller(Value);
    if(bRet == true)
    {
        printf("Youred enterd character is Smaller\n");
    }
    else
    {
        printf("Youred entered character is not Smaller\n");
    }

    return 0;
}