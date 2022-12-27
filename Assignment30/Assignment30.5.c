/*
Write a program which display largest digit of all elements
from singly linear linked list.

Input linked list : |11|->|250|->|532|->|419|
Output : 1   5   5   9 

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

void DisplayLargeDigit(PNODE First)
{
    int iNo = 0;
    int iDigit = 0;
    int iMax = 0;

    while(First != NULL)
    {
        iNo = First->Data;
        while(iNo != 0)
        {
            iDigit = iNo % 10;
            if(iDigit > iMax)
            {
                iMax = iDigit;
            }
            iNo = iNo / 10;  
        }
        printf("%d\t",iMax);
        iMax = 0;
        First = First->next;
    }
}
 
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;

    InsertFirst(&Head,419);
    InsertFirst(&Head,532);
    InsertFirst(&Head,250);
    InsertFirst(&Head,11);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    DisplayLargeDigit(Head);
   
    return 0;
}