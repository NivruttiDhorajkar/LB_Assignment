// Accept N numbers from user and acept Range,
// Display all elements from that range.

// Input : N : 6
//          Start : 60
//          End : 90
//          Elements : 85   66  3   76  93  88
// Output : 66  76  88

// Input : N : 6
//          Start : 30
//          End : 50
//          Elements : 85   66  3   76  93  88
// Output : 

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength, int iNo1, int iNo2)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] > iNo1) && (Arr[iCnt] < iNo2))
        {
            printf("%d\t",Arr[iCnt]);
        }
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iStart = 0;
    int iEnd = 0;
    

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

    printf("Enter starting point:\n");
    scanf("%d",&iStart);

    printf("Enter ending point:\n");
    scanf("%d",&iEnd);

    Display(ptr,iSize,iStart,iEnd);

    free(ptr);
    return 0;
}