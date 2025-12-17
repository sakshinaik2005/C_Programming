/*
    write a program which search last occurance of particular element from singly linear linked list.
    function should return position at which element is found

    function Prototype :
    int SearchFirstOcc(PNODE Head, int no);
    Input linked list :|10|->|20|->|30|->|40|->|50|->|30|->|70|
    Input : 30
    Output :6

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

int SearchLastOcc(PNODE Head, int no)
{
    int iPos = 1;
    int iLastPos = -1;

    while(Head != NULL)
    {
        if(Head->Data == no)
        {
            iLastPos = iPos;
        }
        Head = Head->Next;
        iPos++;
    }
    return iLastPos;
}

int main()
{
    PNODE First = NULL;
    int iRet = 0;

    InsertFirst(&First, 40);
    InsertFirst(&First, 30);
    InsertFirst(&First, 20);
    InsertFirst(&First, 30);
    InsertFirst(&First, 10);

    iRet = SearchLastOcc(First, 30);

    if(iRet != -1)
    {
        printf("Last occurrence at position : %d\n", iRet);
    }
    else
    {
        printf("Element not found\n");
    }

    return 0;
}
