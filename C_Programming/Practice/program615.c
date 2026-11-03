#include<stdio.h>
#include<stdlib.h>

#define MAXINODE 5

struct node
{
    int data;
    struct node * next;
};

typedef struct node INODE;
typedef struct node * PINODE;
typedef struct node * * PPINODE;

PINODE head = NULL;

void CreateDILB()
{

}

void DisplayDILB()
{
    PINODE temp = head;

    while(temp != NULL)
    {
        printf("| %d | -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main()
{
    CreateDILB();

    DisplayDILB();

    return 0;
}