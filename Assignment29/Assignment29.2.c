/*
Write a program which displays all elements which are prime
from singly linear linked list.

Input linked list : |9|->|11|->|20|->|17|->|41|->|22|->89
Output : 11  17  41  89

*/

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

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

bool CheckPrime(int iNo)
{
    int iCnt = 0;
    int iCount = 0;
    bool bFlag = false;
    
    while(iCnt<=iNo/2)
    {
        if(iNo % iCnt == 0)
        {
            iCount =1;
            break;
        }
        else
        {
            iCnt++;
        }
    }

    if(iCount == 0)
    {
        bFlag = true;
    }
    else
    {
        bFlag = false;
    }
}

void DisplayPrime(PNODE First)
{
    while(First != NULL)
    {
        if(CheckPrime(First->Data) == true)
        {
            printf("%d\t",First->Data);
        }
        First = First->next;
    }
}
 
int main()
{
    PNODE Head = NULL;
    int iRet = 0;
    int iRet1 = 0;
    int iValue1 = 0;

    InsertFirst(&Head,89);
    InsertFirst(&Head,22);
    InsertFirst(&Head,41);
    InsertFirst(&Head,17);
    InsertFirst(&Head,20);
    InsertFirst(&Head,11);

    // InsertFirst(&Head,12);
    // InsertFirst(&Head,32);
    // InsertFirst(&Head,35);
    // InsertFirst(&Head,100);
    // InsertFirst(&Head,20);
    // InsertFirst(&Head,58);
    
    Display(Head);
    iRet = Count(Head);
    printf("Number of nodes in linked list are:%d\n",iRet);

    DisplayPrime(Head);
    return 0;
}