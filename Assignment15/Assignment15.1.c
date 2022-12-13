// Accept N numbers from user and return frequency 
// of even numbers.

// Input : N : 6
//          Elements : 85   66  3   80  93  88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int CountEven(int Arr[], int iLength)
{
    int iCnt =0;
    int iFrequency = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] % 2) == 0)
        {
            iFrequency++;
        }
    }
    return iFrequency;
}

int main()
{   
    int *ptr =NULL;
    int iSize = 0;
    int iCnt = 0;
    int iRet = 0;

    printf("Enter how many elements u want:\n");
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
        printf("Enter %d element:\n",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = CountEven(ptr,iSize);
    printf("Count of even numbers is:%d\n",iRet);

    free(ptr);

    return 0;
}