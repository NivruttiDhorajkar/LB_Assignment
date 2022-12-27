/*
Write a program which return second maximum element
from singly linear linked list.

Input linked list : |110|->|230|->|320|->|240|
Output : 240

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

int DisplayMax(PNODE First)
{
    int iCnt = 0;
    int Maximum = 0;
    int iMax = First->Data;

    while(First != NULL)
    {
        if(First->Data > Maximum)
        {
            Maximum = First->Data;
        }

        if(First->Data > iMax && First->Data < Maximum)
        {
            iMax = First->Data;
        }
    }
    return iMax;
}

 
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;

    InsertFirst(&Head,240);
    InsertFirst(&Head,320);
    InsertFirst(&Head,230);
    InsertFirst(&Head,110);
    InsertFirst(&Head,250);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    iRet1 = DisplayMax(Head);
    // printf("Maxixmum is:%d\n",iRet1);

    // iRet1 = DisplaySecondMax(Head);
    printf("Second maximum element in linked list is: %d\n",iRet1);
    return 0;
}