/*
Write a program which accept string from user and
count number of white spaces.

Input : marvellous
Output : 0

Input : Marvellous Infosystem
Output : 1

Input : Marvellous Infosysytem by piyush khairnar
Output : 4

*/

#include<stdio.h>

int CountWhitespaces(char *str)
{
    int iCnt =0;

    while((*str)!='\0')
    {
        if(*str == ' ')
        {
            iCnt++;
        }
        str++;
    }
    return iCnt;
}

int main()
{
    char Arr[50];
    int iRet = 0;

    printf("Enter the String:\n");
    scanf("%[^'\n']s",Arr);

    iRet = CountWhitespaces(Arr);
    printf("Whitespaces is:%d\n",iRet);
    return 0;

}