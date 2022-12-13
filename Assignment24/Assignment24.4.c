/*
Accpet charcter from user user and check wheather it is 
special symbol or not.(!,@,#,$,%,^,&,*).

Input : %
Ouput : TRUE

Input : d
Output : FALSE
*/

#include<stdio.h>
#include<stdbool.h>

bool CheckSymbol(char ch)
{
    if((ch == '!') || (ch =='@') || (ch == '#') || (ch == '$') ||
    (ch == '%') || (ch == '^') || (ch == '&') || (ch == '*'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    char chValue = '\0';
    bool bRet = false;

    printf("Enter character:\n");
    scanf("%c",&chValue);

    bRet = CheckSymbol(chValue);

    if(bRet == true)
    {
        printf("%c it is a symbol\n",chValue);
    }
    else
    {
         printf("%c it is not a symbol\n",chValue);
    }

    return 0;
}
