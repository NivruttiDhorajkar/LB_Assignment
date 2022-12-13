// Write a program which accept number from user and
// its digit in reverse order.

// Input : 2395
// Output : 5
//          9
//          3
//          2

// Input : 1018
// Output : 8  
//          1
//          0
//          1

// Input : -1018
// Output :  8  
//           1
//           0
//           1

// Input : 9000
// Output : 0
//          0
//          0
//          9

#include<stdio.h>

void DisplayReverseDigit(int iNo)
{
    if(iNo < 0)
    {
        iNo =-iNo;
    }
    int iRev=0;
    int iDigit=0;

    while(iNo != 0)
    {
        iDigit= iNo % 10;
        iRev = (iRev * 10) + iDigit;
        iNo=iNo/10;
        printf("%d\n",iDigit);
         
    }

}    

int main()
{
    int iValue=0;

    printf("Enter number:\n");
    scanf("%d",&iValue);

    DisplayReverseDigit(iValue);

    return 0;
}