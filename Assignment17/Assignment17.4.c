// Accept N numbers from user and display all such numbers 
// which contains 3 digits in it.

// Input : N : 6
//         Elements : 8225  665 3   76  953 858
// Output : 665 953 858

#include<stdio.h>
#include<stdlib.h>

void Display(int Arr[], int iLength)
{
    int iCnt = 0;
    int iDigit = 0;
   
    int Copy = 0;
     
    for(iCnt=0; iCnt<iLength; iCnt++)
    {
        Copy = Arr[iCnt];

        while(Copy != 0)
        {
            Copy % 10;
            iDigit++;
            Copy = Copy / 10;
        }
        

        if(iDigit == 3 )
        {
            printf("%d\n", Arr[iCnt]);
        }

        iDigit = 0;

       
    }
}

int main()
{
    int *ptr = NULL;
    int iSize = 0;
    int iCnt=0;

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

    Display(ptr,iSize);

    free(ptr);
    return 0;
}