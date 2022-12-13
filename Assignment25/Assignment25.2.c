/*
Write a program which accept string from user and
count number of small characters.

Input : "Marvellous"
Output : 9

*/

#include<stdio.h>

int CountSmaller(char *str)
{
    int iCnt = 0;

    while(*str !='\0')
    {
       if((*str>='a') && (*str <= 'z'))
       {
            iCnt++;
       }
        str++;
    }
    return iCnt;
}

int main()
{
    char ch[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",ch);

    iRet = CountSmaller(ch);
    printf("Smaller letter in a string is :%d",iRet);

    return 0;
}