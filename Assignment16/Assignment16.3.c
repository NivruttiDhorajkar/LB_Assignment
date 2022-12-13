// Accept N number from user and accept  one another number
// as NO, return index of last occurence of that NO.

// Input : N : 6
//          No : 66
//          Elements: 85    66  3   66  93  88
// Output : 3

// Input : N : 6
//          No : 93
//          Elements: 85    66  3   66  93  88
// Output : 4

// Input : N : 6
//          No : 12
//          Elements: 85    66  3   66  93  88
// Output : -1


#include<stdio.h>
#include<stdlib.h>

int LastOccurence(int Arr[], int iLength, int iNo)
{
    int iCnt=0;

    for(iCnt=iLength-1; iCnt>=0; iCnt--)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }
    if(iCnt == -1)
    {
        return -1;
    }
    else
    {
       return iCnt; 
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iSearch = 0;
    int iRet = 0;

    printf("Enter the size of elements u want:\n");
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
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    printf("Enter the element u want to search:\n");
    scanf("%d",&iSearch);

    iRet = LastOccurence(ptr,iSize,iSearch);
    if(iRet == -1)
    {
        printf("%d is absent in array:\n",iSearch);
    }
    else
    {
        printf("%d is present at index:%d\n",iSearch,iRet);
    }
    free(ptr);
    return 0;
}