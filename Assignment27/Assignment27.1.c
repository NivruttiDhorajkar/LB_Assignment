/*
Write a program which accept string from user and accept one character.
Check wheather that character is present or not.

Input : string:Mrvellous Multi OS   ch:e
Output : True

Input : string:Mrvellous Multi OS   ch:w
Output : False

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckCharacter(char *str, char ch1)
{
    bool bFlag = false;
    while(*str != '\0')
    {
        if(*str == ch1)
        {
            bFlag = true;
            break;
        }
        str++;
    }
    return bFlag;

}

int main()
{
    char Arr[20];
    char ch = '\0';
    bool bRet =false;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Entered your search charcter:\n");
    scanf(" %c",&ch);

    bRet = CheckCharacter(Arr,ch);

    if(bRet == true)
    {
        printf("Your entered charcter is present:\n ");
    }
    else
    {
        printf("Your entered character is not present:\n");
    }

    return 0;

}
