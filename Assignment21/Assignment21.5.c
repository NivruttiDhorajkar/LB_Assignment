/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 4      iCol = 4
Output :   1    2   3   4 
           2    3   4   5
           3    4   5   6
           4    5   6   7   
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int iCnt1 = 0;
    int iCnt2 = 0;   
    int i=0;
    int j=0;
    i=1;
    j=2;

    for(iCnt1=1; iCnt1<=iRow; iCnt1++)
    {
        for(iCnt2=1; iCnt2<=iCol;iCnt2++)
        {
           printf("%d\t",i);
           i++;
        }
        i = j++;
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