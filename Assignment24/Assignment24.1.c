/*
Write a program which displays ASCII table.
Table contains symbol, Decimal, Hexadecimal and Octal representation of
every member from 0 to 255.
*/

#include<stdio.h>

void ASCIIDisplay()
{
    int i=0;
    for(i=0; i<=127; i++)
    {
        printf("%c\t   %d\t   %x\t\t %o \n",i,i,i,i);
    }
}

int main()
{
    printf("********************************************************\n");
    printf("------------ASCII Table----------\n");

    printf("Symbol\tDecimal\tHexaDecimal\tOctal \n");

    ASCIIDisplay();

     printf("********************************************************\n");
    return 0;
}