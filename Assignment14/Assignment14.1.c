// Accept N number from user and return difference between summation of even elements 
// and summation of odd elelments.

// Input : N : 
//          Elements : 85   66  3   80  93  88
// Output : 53      (234-181)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
    int iCnt=0;
    int iEvensum=0;
    int iOddsum=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iEvensum = iEvensum + Arr[iCnt];
        }
        else
        {
            iOddsum = iOddsum + Arr[iCnt];
        }
    }
    return iEvensum - iOddsum;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter number of elements:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter element %d :\t", iCnt +1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);

    printf("Result is:%d",iRet);

    free(ptr);

    return 0;
}