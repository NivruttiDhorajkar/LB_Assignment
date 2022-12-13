// Accept N number from user and return difference
// between largest and smallest number

// Input : N : 6
//          Elements : 85   66  3   66  93  88
// Output : 90      (93-3)

#include<stdio.h>
#include<stdlib.h>

int Difference(int Arr[], int iLength)
{
     int iCnt = 0;
    int iMax=0;
    int iMin=Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax = Arr[iCnt];
        }
        else
        {
            if(iMin > Arr[iCnt])
            {
                iMin = Arr[iCnt];
            }
        }
    
    }
    return iMax - iMin;
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt=0;
    int iRet = 0;

    printf("Enter the element u want :\n");
    scanf("%d",&iSize);

    ptr = (int*)malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unablre to allocate the memory:\n");
        return -1;
    }

    printf("Enter %d elemnts:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Difference(ptr,iSize);
    printf("Difference between Smallest & largest element is:%d\n",iRet); 

    free(ptr);
    return 0;
}