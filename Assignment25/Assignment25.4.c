/*
Write a program which accept string from user and 
check wheather it contains vowels in it or not.

Input : "marvellous"
Output : True

Input : "xyz"
Output : False

*/

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char *str)
{
    while(*str !='\0')
    {
        if((*str == 'a') || (*str == 'e') || (*str == 'i') ||
        (*str == 'o') || (*str == 'u'))
        {
            break;
        }
        str++;
    }
    if(*str == '\0')
    {
        return false;
    }
    {
        return true;
    }
}


int main()
{
    char ch[20];
    bool bRet  ;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",&ch);

    bRet = CheckVowel(ch);

    if(bRet == true)
    {
        printf("Vowel is present\n");
    }
    else
    {
        printf("Vowel is absent\n");
    }
    
    return 0;
}