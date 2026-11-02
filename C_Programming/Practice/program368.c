#include<stdio.h>
#include<stdlib.h>

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node * PPNODE;

struct node
{
    int data;
    struct node * next;
};

int main()
{
    PNODE head = NULL;

    return 0;
}