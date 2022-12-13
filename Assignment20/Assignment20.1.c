/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 4       iCol = 4
Output :    A   B   C   D
            A   B   C   D
            A   B   C   D
            A   B   C   D
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1=0;
    int iCnt2=0;
    char ch = 'A';

    for(iCnt1=1; iCnt1<=iRow; iCnt1++)
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
            printf("%c\t",ch);
            ch++;
        }
        ch = 'A';
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