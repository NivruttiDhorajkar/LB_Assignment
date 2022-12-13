/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 3       iCol = 5
Output :    A   A   A   A   A
            B   B   B   B   B
            C   C   C   C   C
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1=0;
    int iCnt2=0;
    char ch = 'A';

    for(iCnt1=1; iCnt1<=iRow; iCnt1++,ch++)
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
           printf("%c\t",ch) ;  
        }
        
        printf("\n");
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