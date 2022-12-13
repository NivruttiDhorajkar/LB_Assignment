// Accept N number from user and
// return product of all odd numbers.

// Input : N : 6
//          Elements : 15   66  3   70  10  88
// Output : 45

// Input : N : 6
//          Elements : 44   66  72  70  10  88
// Output : 0

#include<stdio.h>
#include<stdlib.h>

int ProductOdd(int Arr[], int iLength)
{
    int iCnt = 0;
    int iPro = 1;

    for(iCnt=0; iCnt<iLength ; iCnt++)
    {
        if(Arr[iCnt] % 2 !=0)
        {
            iPro = iPro * Arr[iCnt];
        }
    }
    if(iPro == 1 )
    {
        iPro = 0;
    }
    return iPro;
}


int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt = 0;   
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

    iRet = ProductOdd(ptr,iSize);
    printf("Product of odd elements is :%d\n",iRet);
   
    free(ptr);
    return 0;
}