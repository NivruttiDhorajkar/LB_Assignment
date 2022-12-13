// Accept N number from user and return smallest number.

// Input :  N : 6
//          Elements : 85   66  3   66  93  88
// Output : 3

#include<stdio.h>
#include<stdlib.h>

int Smallest(int Arr[], int iLength)
{
    int iCnt = 0;
    int iMin=Arr[0];

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if(Arr[iCnt]<iMin)
        {
            iMin = Arr[iCnt];
        }
    }
    return iMin;
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

    printf("Enter %d elemnts\n:",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter %d element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    iRet = Smallest(ptr,iSize);
    printf("Smallest element is:%d\n",iRet);

    free(ptr); 

    return 0;

}