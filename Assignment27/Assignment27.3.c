/*
Write a program which accept string from user and accept one
character.Return index of first occurance of that charcter.

Input : string:Marvellous Multi OS      ch: M
Output : 0

Input : string:Marvellous Multi OS      ch: w
Output : -1

Input : string:Marvellous Multi OS      ch: e
Output : 4

*/

#include<stdio.h>

int CountFirstOCuurenceOFIndex(char*str, char ch1)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str == ch1)
        {
            break;
        }
        iCnt++;
        str++;
    }
    if(*str == '\0')
    {
        return -1;
    }
    else
    {
        return iCnt;
    }
}

int main()
{
    char Arr[20];
    char ch = '\0';
    int iRet = 0;

    printf("Enter string:\n");
    scanf("%[^'\n']s",Arr);

    printf("Entered your search charcter:\n");
    scanf(" %c",&ch);

    iRet = CountFirstOCuurenceOFIndex(Arr,ch);

    printf("First location of %c is %d\n",ch,iRet);

}
