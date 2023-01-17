/*
Write a recursive program which accept string from user 
and count white spaces .

Input : KiSHor dhoRAJkar
Output : 9

*/

#include<stdio.h>

int CountSmallCharcter(char *str)
{
    static int iCnt = 0;

    if(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            iCnt++;
        }
        str++;
        CountSmallCharcter(str);
    }
    return iCnt;
}

int main()
{
    char Arr[20];
    int iRet = 0;

    printf("Enter the string:\n");
    scanf("%[^'\n']s",&Arr);

    iRet = CountSmallCharcter(Arr);
    printf("Small Charcters in string is:%d\n",iRet);

    return 0;
}