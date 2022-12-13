/* Accept number of rows and number of columns from user
And display below pattern.

Input : iRow = 4      iCol = 4
Output :   2    4   6   8   10
           1    3   5   7   9
           2    4   6   8   10
           1    3   5   7   9
            
*/


#include<stdio.h>

void Display(int iRow, int iCol)
{
    int i=0;
    int j=0;
    int k = 0;
    int l = 0;
    k=2;
    l=1;

    for(i=1; i<=iRow; i++)
    {
        for(j=1;j<=iCol;j++)
        {
          
          if((i % 2) == 0)
          {
            printf("%d\t",l);
            l = l+2;
            
          }
          else
          {
            printf("%d\t", k);
            k=k+2;
            
          }          
        }  
        k=2;
        l=1;     
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