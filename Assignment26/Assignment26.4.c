/*
Write a program which accept string from user
and display only digits from that string.

Input : marve89llous121
Output : 89121

Input : Demo
Output : 

*/

#include<stdio.h>

void DisplayDigits(char *str)
{
    int iCnt = 0;
    for(iCnt=0; (str[iCnt]) !='\0'; iCnt++)
    {
        if((str[iCnt] >= '0') && (str[iCnt] <='9'))
        {
            printf("%c",str[iCnt]);
        }
    }
}

int main()
{
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    DisplayDigits(Arr);

    return 0;
}