/*
Write a program which return addition of all even elements
from singly linear linked list.

Input linked list : |11|->|20|->|32|->|41|
Output : 52

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

int SummationEvenElement(PNODE First)
{
    int iSum = 0;
    while(First != NULL)
    {
        if(First->Data % 2 == 0)
        {
            iSum = iSum + First->Data;
        }
        First = First ->next;
    }
    return iSum;
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
    InsertFirst(&Head,100);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    iRet1 = SummationEvenElement(Head);
    printf("Addition of all even elements in linked list is: %d\n",iRet1);
    return 0;
}