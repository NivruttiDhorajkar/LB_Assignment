/*
Problem Statement : Accept charcter from user and 
check whaether it is alphabet or not (A-Z a-z)

Input : F
Output : TRUE

Input : &
Output : FAlSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckAlphabet(char ch)
{
    if((ch >='A') && (ch <='Z') || (ch >= 'a') && (ch <='z'))
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

    bRet = CheckAlphabet(Value);
    if(bRet == true)
    {
        printf("Youred enterd character is alphabet\n");
    }
    else
    {
        printf("Youred entered character is not alphabet\n");
    }

    return 0;
}