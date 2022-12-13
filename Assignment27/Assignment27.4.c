/*
Write a program which accept string from user and accept one
character.Return index of first occurance of that charcter.

Input : string:Marvellous Multi OS      ch: M
Output : 11

Input : string:Marvellous Multi OS      ch: w
Output : -1

Input : string:Marvellous Multi OS      ch: e
Output : 4

*/

#include<stdio.h>

int CountLastOCuurenceOFIndex(char*str, char ch1)
{
    int iCnt = 0;
    int LastIndex = -1;


    while(*str !='\0')
    {
        if(*str == ch1)
        {
            LastIndex = iCnt;
        }
        iCnt++;
        str++;
    }
    return LastIndex;

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

    iRet = CountLastOCuurenceOFIndex(Arr,ch);

    printf("Last location of %c is %d\n",ch,iRet);

}
