/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 5      iCol = 5
Output :   a    b   c   d   e
           1    2   3   4   5
           a    b   c   d   e
           1    2   3   4   5
           a    b   c   d   e
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1=0;
    int iCnt2=0;
    char ch = 'a';

    for(iCnt1=1; iCnt1<=iRow; iCnt1++)
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
           if(iCnt1 % 2 == 0)
           {
                printf("%d\t",iCnt2);
           }
           else
           {
                printf("%c\t",ch);
                ch++;
           }
        }
        printf("\n");
        ch = 'a';
    }
}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter number of rows:\n");
    scanf("%d",&iValue1);

    printf("Enter number of columns:\n");
    scanf("%d",&iValue2);

    Display(iValue1,iValue2);
    return 0;
}