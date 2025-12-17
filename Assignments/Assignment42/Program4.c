/*
    write a program which return largest  element from singly linear linked list.

    function Prototype :
    int Maximum(PNODE Head);
    Input linked list :|110|->|230|->|320|->|240|
    Output :320

*/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int Data;
    struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE Head, int no)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));
    newn->Data = no;
    newn->Next = NULL;

    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->Next = *Head;
        *Head = newn;
    }
}

int Maximum(PNODE Head)
{
    int iMax = 0;

    while(Head == NULL)
    {
        return -1;
    }
    iMax = Head -> Data;

    while(Head !=NULL)
    {
        if(Head -> Data > iMax)
        {
            iMax = Head -> Data;
        }
        Head = Head -> Next;
    }
    return iMax;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 240);
    InsertFirst(&First, 320);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);

    iRet = Maximum(First);

    printf("Largest element is : %d\n", iRet);

    return 0;
}
