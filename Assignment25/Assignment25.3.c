/*
Write a program which accept string from user and return difference between
frequency of small charcters and frequency of capital characters.

Input : MarvellouS
Output : 6 (8-2)

*/

#include<stdio.h>

int Difference(char *str)
{
    int iCnt = 0;
    int iCnt1 = 0; 

    while(*str !='\0')
    {
       if((*str>='a') && (*str <= 'z'))
       {
            iCnt++;
       }
       else
       {
            iCnt1++;
       }
        str++;
    }
    return iCnt - iCnt1;
}

int main()
{
    char ch[20];
    int iRet = 0;

    printf("Enter String:\n");
    scanf("%[^'\n']s",ch);

    iRet = Difference(ch);
    printf("Difference between small and capital character is:%d",iRet);

    return 0;
}