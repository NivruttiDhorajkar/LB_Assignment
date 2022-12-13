// Accept N numbers from user and accept one another number as NO
// check wheather No is present or not.

// Input : N : 6
//          No : 66
//          Elements : 85   66  3   66  93  88
// Output : TRUE

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength, int iNo)
{
    int iCnt = 0;
    bool bRet = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            bRet = true;
            break;
        }
        else
        {
            bRet = false;
        }
    }
    return bRet;
   
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;
    int iSearch = 0;
    bool bRet = 0;

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

    printf("Enter the element we want to search:\n");
    scanf("%d",&iSearch);

    bRet = Check(ptr,iSize,iSearch);

    if(bRet == true)
    {
        printf("TRUE\n");
    }
    else
    {
        printf("FALSE\n");
    }

    free(ptr);
    return 0;
}