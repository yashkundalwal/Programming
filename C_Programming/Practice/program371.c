// Insert First(Linked List)

#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * * PPNODE;

struct node
{
    int data;
    struct node * next;
};

int Count(PNODE first)
{ 
    return 0;
}

void Display(PNODE first)
{}

void InsertFirst(PPNODE first, int iNo)
{
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)                         //LinkedList is empty
    {
        *first = newn;
    }
    else                                       //LinkedList contains atleast one Node
    {
        newn->next = *first;
        *first = newn;
    }
}

void InsertLast(PPNODE first, int iNo)
{
    PNODE newn = NULL;
    PNODE temp = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if(*first == NULL)                         //LinkedList is empty
    {
        *first = newn;
    }
    else                                       //LinkedList contains atleast one Node
    {

    }
}

void InsertAtPos(PPNODE first, int iNo, int iPos)
{}

void DeleteFirst(PPNODE first)
{}

void DeleteLast(PPNODE first)
{}

void DeleteAtPos(PPNODE first, int iPos)
{}

int main()
{
    PNODE head = NULL;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    return 0;
}