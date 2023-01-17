/*
Write a recursive program which accept string from user 
and count white spaces .

Input : He llo wor LD
Output : 3

*/

#include<stdio.h>

int CountWhiteSpaces(char *str)
{
    static int iCnt = 0;

    if((*str) != '\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
        CountWhiteSpaces(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = CountWhiteSpaces(Arr);
    printf("Whites spaces in string is:%d\n",iRet);

    return 0;
}