// Accept N numbers from user and display all 
// such elements which are divisible by 5.

// Input : N : 6
//          Elelments : 85  66  3   80  93  88
// Output : 85  80

#include<stdio.h>
#include<stdlib.h>

void DisplayDivisibleByFive(int Arr[],int iLength)
{
    int iCnt = 0;

    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        if((Arr[iCnt] % 5) == 0)
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

    printf("Enter the how many u want:\n");
    scanf("%d",&iSize);

    ptr = (int *)malloc (iSize * sizeof(int));

    if(ptr == NULL)
    {
        printf("Unable to allocate memory:\n");
        return -1;
    }

    printf("Enter %d elements:\n",iSize);
    for(iCnt=0; iCnt<iSize; iCnt++)
    {
        printf("Enter %d Element:\t",iCnt+1);
        scanf("%d",&ptr[iCnt]);
    }
    DisplayDivisibleByFive(ptr,iSize);
    free(ptr);

    return 0;
}