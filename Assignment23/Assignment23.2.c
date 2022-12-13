/*
Problem statement : Accept character from user and 
check wheather it is capital or not.(A-Z)

Input : F
Output : TRUE

Input : d
Output : FALSE

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if((ch >='A') && (ch <='Z'))
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

    bRet = CheckCapital(Value);
    if(bRet == true)
    {
        printf("Youred enterd character is Capital\n");
    }
    else
    {
        printf("Youred entered character is not Capital\n");
    }

    return 0;
}