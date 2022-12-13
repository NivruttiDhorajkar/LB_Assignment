// Problem Statement : Accept one character from user and 
// check wheater that character is vowel(a,e,i,o,u) or not.

// Input : E 
// Output : TRUE

// Input : d
// Output : FALSE


#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

char CheckVowel(char c)
{
    if(c == 'a' || c == 'e' ||  c == 'i' ||  c == 'o' ||  c == 'u' ||
       c == 'A' ||  c == 'E' ||  c == 'I' ||  c == 'O' ||  c == 'U')
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    char cValue='\0';
    BOOL bRet ;

    printf("Enter character:\n");

    scanf("%c",&cValue);

    bRet= CheckVowel(cValue);

    if(bRet == TRUE)
    {
        printf("It is Vowel");
    }
    else if(bRet == FALSE)
    {
        printf("It is not Vowel");
    }
    return 0;
}