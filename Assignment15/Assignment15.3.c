// Accept N numbers from user check wheather that
// numbers contains 11 in it or not.

// Input : N : 6
//          Element : 85    66  11  80  93  88  
// Output : 11 is present

// Input : N : 6
//          Element : 85    66  3  80  93  88  
// Output : 11 is absent

#include<stdio.h>
#include<stdbool.h>
#include<stdlib.h>

bool CheckEleven(int Arr[], int iLength)
{
    int iCnt = 0;
    bool bRet = 0;
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] == 11))
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
    bool bRet = 0;

    printf("Enter how many elements u want:\n");
    scanf("%d",&iSize);

    ptr = (int*) malloc (iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate the memory:\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt <iSize; iCnt++)
    {
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    bRet = CheckEleven (ptr,iSize);
    if(bRet == true)
    {
        printf("11 is present:\n");
    }
    else
    {
        printf("11 is absent:\n");
    }

    free(ptr);
    return 0;
}