/*
Write a program which accept string from user and 
convert it into lower case

Input :  marvellous multi os
Output : MARVELLOUS MULTI OS

*/

#include<stdio.h>

void StrUpper(char *str)
{
    int i = 0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
    }

}

int main()
{
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    StrUpper(Arr);

    printf("Modified string is:%s",Arr);

    return 0;
}