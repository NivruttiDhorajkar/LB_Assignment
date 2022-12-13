/*
Accept charcter from user. If it is capital then display all the charcters from
the input characters till Z. if input charcter is small then print all the charcters in reverse order till a.
In other cases return directly.

Input : Q
Output : Q  R   S   T   U   V   W   X   Y   Z

Input : m
Output : m  l   k   j   i   h   g   f   e   d   c   b   a

Input  :8
Output : 
*/

#include<stdio.h>

void Display(char ch1)
{
    char Upperch = '\0';
    char Lowerch = '\0';
    Upperch = 'A';
    Lowerch = 'a';

    if(ch1 >='A')
    {
         for(Upperch=ch1; Upperch <='Z'; Upperch++)
        {
            printf("%c\t",Upperch);
        }
    }
    else
    {
        printf("\n");
    }

    if(ch1 <= 'z')
    {
        for(Lowerch=ch1; Lowerch>='a'; Lowerch--)
        {
            printf("%c\t",Lowerch);
        }
    }
       else
    {
        printf("\n");
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
