/*
Accept character from user and display its ASCII value in
decimal, octal, hexadecimal format.

Input : A
Output  : Decimal : 65
          Ocatl   : 0101
          Hexadeciaml : 0X41
*/

#include<stdio.h>

void Display(char ch)
{
    printf("%d\t %o\t %x\n",ch,ch,ch);
}

int main()
{
    char chValue = '\0';

    printf("Enter the charcacter\n");
    scanf("%c",&chValue);

    printf("Decimal\t Ocatl\t Hexadecimal\n");

    Display(chValue);

    return 0;
}