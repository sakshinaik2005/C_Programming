/*
    write a program which return smallest element from singly linear linked list.

    function Prototype :
    int Minimum(PNODE Head);
    Input linked list :|110|->|230|->|20|->|240|->|640|
    Output :20

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

int Minimum(PNODE Head)
{
    int iMin = 0;

    while(Head == NULL)
    {
        return -1;
    }
    iMin = Head -> Data;

    while(Head !=NULL)
    {
        if(Head -> Data < iMin)
        {
            iMin = Head -> Data;
        }
        Head = Head -> Next;
    }
    return iMin;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 640);
    InsertFirst(&First, 240);
    InsertFirst(&First, 20);
    InsertFirst(&First, 230);
    InsertFirst(&First, 110);
    
    iRet = Minimum(First);

    printf("smallest element is : %d\n", iRet);

    return 0;
}
