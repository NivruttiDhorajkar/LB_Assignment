/*
Write a program which search last occurence of particular element
from singly linear linked list.
Function should return position at which elemnt is found

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70|
Input Element : 30
Output : 6

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

int SearchLastOCCurence(PNODE First, int iNo)
{
    PNODE temp = First;
    int iCnt = 0;
    int itemp = 0;

    while(temp != NULL)
    {
        iCnt++;
        if(temp->Data == iNo)
        {
            itemp = iCnt;
        }
        temp = temp->next;
    }
    return itemp;
}


int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;
    int iValue1 = 0;

    InsertFirst(&Head,70);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,30);
    InsertFirst(&Head,50);
    InsertFirst(&Head,40);
    InsertFirst(&Head,30);
    InsertFirst(&Head,20);
    InsertFirst(&Head,10);

    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    printf("enter ur search element:\n");
    scanf("%d",&iValue1);
    iRet1 = SearchLastOCCurence(Head,iValue1);
    if(iRet1 == 0)
    {
        printf("Element is not found\n");
    }
    else
    {   
        printf("Last ocuurence position is:%d\n",iRet1);
    }
   
    return 0;
}