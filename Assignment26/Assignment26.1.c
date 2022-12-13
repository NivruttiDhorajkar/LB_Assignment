/*
Write a program which accept string from user and 
convert it into lower case

Input : Marvellous Multi OS
Output : marvellous multi os

*/

#include<stdio.h>

void StrLower(char *str)
{
    int i = 0;

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

}

int main()
{
    char Arr[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",Arr);

    StrLower(Arr);

    printf("Modified string is:%s",Arr);

    return 0;
}