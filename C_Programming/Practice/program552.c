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
    static int iCount = 0;

    if(first != NULL)
    {
        iCount++;
        first = first -> next;

        Count(first);
    }

    return iCount;
}

void Display(PNODE first)
{
    if(first != NULL)
    {
        printf("| %d | -> ", first->data);
        Display(first->next);
    }
}

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

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertFirst(&head,101);
    InsertFirst(&head,51);
    InsertFirst(&head,21);
    InsertFirst(&head,11);

    Display(head);

    iRet = Count(head);

    printf("\nNumber of Nodes are: %d\n",iRet);

    return 0;
}