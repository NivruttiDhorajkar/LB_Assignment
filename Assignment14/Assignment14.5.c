// Accept N numbers from user and display all such
// elelments which are multiples of 11.

// Input : N : 6
//          Elements:85 66  3   55  93  88
// Output : 66  55  88

#include<stdio.h>
#include<stdlib.h>

void MultipleEleven(int Arr[],int iLength)
{
    int iCnt=0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] % 11) == 0 )
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

    printf("Enter how many elements u want:\n");
    scanf("%d",&iSize);

    ptr = (int *) malloc(iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to alocate the memory:\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter %d elements:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }

    MultipleEleven(ptr,iSize);
    free(ptr);

    return 0;
}
