// Accept N number from user and accept one another number as NO,
// return frequency of NO form it.

// Input : N :6
//         No : 66
//         Elements : 85    66  3   66  96  88
// Output : 2

// Input : N :6
//         No : 12
//         Elements : 85    66  3   66  96  88
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int Frequency(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;
    int iFrequency = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iSerach = 0;
    int iCnt=0;
    int iRet = 0;

    printf("Enter how many number u want:\n");
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
        printf("enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter ur search element:\n");
    scanf("%d",&iSerach);

    iRet = Frequency(ptr,iSize, iSerach);
    printf("Frequency of %d is :%d\n",iSerach,iRet);

    return 0;
}