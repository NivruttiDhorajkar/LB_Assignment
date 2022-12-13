// Accept N numbers from user and display all such
// elements which are even and divisible by 5.

// Input : N : 6
//          Elements : 85   66  3   80  93  88
// Output : 80

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[],int iLength)
{
    int iCNt=0;

    for(iCNt=0; iCNt<iLength; iCNt++)
    {
        if((Arr[iCNt] % 2 ==0) && ((Arr[iCNt] % 5) ==0))
        {
            printf("%d\t",Arr[iCNt]);
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

    ptr = (int*)malloc (iSize * sizeof(int));

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

    Display(ptr,iSize);
    free(ptr);

    return 0;
}