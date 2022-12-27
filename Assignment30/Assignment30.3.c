/*
Write a program which display product of all digits of all elements
from singly linear linked list.

Input linked list : |11|->|20|->|32|->|41|
Output : 1   2   6   4

*/

#include<stdio.h>
#include<stdlib.h>

#pragma pack (1)

struct node
{
    int Data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE First, int No)
{
    PNODE newn = (PNODE)malloc(sizeof(NODE));

    newn->next = NULL; 
    newn->Data = No;

    if(*First == NULL)  // If linked list is empty
    {
        *First = newn;
    }
    else
    {
        newn->next = *First;
        *First = newn;
    }

}

void Display(PNODE First)
{
    printf("Elements of linked list are:\n");
    while(First != NULL)
    {
        printf("|%d|->",First->Data);
        First = First->next;
    }
    printf("NULL\n");
}

int Count(PNODE First)
{
    int iCnt = 0;

    while(First != NULL)
    {
        iCnt++;
        First = First->next;
    }
    return iCnt;
}

void DisplayMultiplication(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iMult = 1;

    while(First != NULL)
    {
        iNo = First->Data;
        while(iNo != 0)
        {
            iDigit = iNo % 10 ;
            if(iDigit == 0)
            {
                iDigit = 1;
            }
            iMult = iMult * iDigit;
            iNo = iNo / 10;
        }
        printf("%d\t",iMult);
        iMult = 1;
        First = First->next;
    }
    
     
}
 
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;

    InsertFirst(&Head,41);
    InsertFirst(&Head,32);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    DisplayMultiplication(Head);
   
    return 0;
}