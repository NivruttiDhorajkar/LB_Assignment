/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 3       iCol = 4
Output :    1   1   1   1
            2   2   2   2
            3   3   3   3
            4   4   4   4
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1=0;
    int iCnt2=0;

    for(iCnt1=1; iCnt1<=iCol; iCnt1++)
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
            printf("%d\t",iCnt1);
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