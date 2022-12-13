/*
Write a program which accept string
from user reverse that string in place.
 
Input : abcd
Output : dcba

Input : abba
Output : abba

*/

#include<stdio.h>

void ReverseX(char *str)
{
    char *start = NULL;
    char *end = NULL;
    char temp = '\0';

    start = str;
    end = str;

    while(*end != '\0')
    {
        end++;
    }
    end--;

    while(start < end)
    {
        temp = *start;
        *start = *end;
        *end = temp;

        start++;
        end--;
    }
    
}

int main()
{
    char ch[20];

    printf("Enter the string:\n");
    scanf("%[^'\n']s",ch);

    ReverseX(ch);
    printf("Modify string is:%s",ch);

    return 0;
}