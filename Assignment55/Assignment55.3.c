/*
Write a recursive program which accept string from user 
and count number of charcters.

Input : Hello
Output : 5

*/

#include<stdio.h>

int CountStrlenX(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        iCnt++;
        str++;
        CountStrlenX(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = CountStrlenX(Arr);
    printf("Length of string is:%d\n",iRet);

    return 0;
}