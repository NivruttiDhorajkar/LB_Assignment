/*
Write a program which accept string from user and 
accept one parameter.Return frequency of that character.

Input : string:Marvellous Multi os  ch:M
Output : 2

Input : string:Marvellous Multi os  ch:w
Output : 0

*/

#include<stdio.h>

int CountFrequency(char*str, char ch1)
{
    int iCnt = 0;

    while(*str !='\0')
    {
        if(*str == ch1)
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
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

    iRet = CountFrequency(Arr,ch);

    printf("Frequency of %c is %d\n",ch,iRet);

}
