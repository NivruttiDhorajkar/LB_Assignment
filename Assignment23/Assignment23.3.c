/*
Problem statement : Accept character from user and 
check wheather it is digit or not.(0-9)

Input : 5
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
    if((ch >='0') && (ch <='9'))
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

    bRet = CheckDigit(Value);
    if(bRet == true)
    {
        printf("Youred enterd character is Digit\n");
    }
    else
    {
        printf("Youred entered character is not Digit\n");
    }

    return 0;
}