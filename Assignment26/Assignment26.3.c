/*
Write a program which accept string from user 
and toggle the case.

Input : Marvellous Multi OS
Output : mARVELLOUS mULTI os

*/
#include<stdio.h>

void ConvertToggleX(char *str)
{
    int iCnt = 0;
    for(iCnt=0; (str[iCnt]!='\0'); iCnt++)
    {
        if((str[iCnt] >='A') && (str[iCnt] <= 'Z'))
        {
            str[iCnt] = str[iCnt] + 32;
        }
        else if((str[iCnt]>='a') && (str[iCnt <='z']))
        {
            str[iCnt] = str[iCnt] - 32;
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter String:\n");
    scanf("%[^'\n']s",Arr);

    ConvertToggleX(Arr);
    printf("Modified string is:%s",Arr);

    return 0;
}