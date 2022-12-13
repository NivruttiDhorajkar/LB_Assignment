/*
Accept character from user. If character is small display its corresponding
capital character, and if it small then display as it is corresponding capital. 
In other cases display as it is. 

Input : Q
Output : q

Input : m
Output : M

Input : 4
Output : 4

Input : %
Output : %

*/

#include<stdio.h>

void Display(char ch)
{
    char Upperch = '\0';
    char Lowerch = '\0';
    int ASCII = 0;
    
    if((ch >= 'A') &&  (ch<='Z'))
    {
        Lowerch = ch + 32;
        printf("%c in lowercase is:%c",ch,Lowerch);
        ch++;
    }
    else if((ch >='a') && (ch <= 'z'))
    {
        Upperch = ch - 32;
        printf("%c in Uppercase is:%c",ch,Upperch);
        ch--;
    }
    else
    {
        printf("%c is not in alphabet...",ch);
    }
}

int main()
{
    char chValue = '\0';
    printf("Enter character:\n");
    scanf("%c",&chValue);

    Display(chValue);

    return 0;
}
