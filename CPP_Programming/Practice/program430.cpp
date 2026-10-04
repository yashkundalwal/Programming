#include<iostream>

using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;

class SinglyCL
{
    private:
        PNODE first;
        PNODE last;
        int iCount;
    public:
        SinglyCL();
        void Display();
        int Count();
        void InsertFirst(int iNo);
        void InsertLast(int iNo);
        void InsertAtPos(int iNo, int iPos);
        void DeleteFirst();
        void DeleteLast();
        void DeleteAtPos(int iPos);
};

SinglyCL :: SinglyCL()
{
    cout<<"Inside Constructor \n";
    this->first = NULL;
    this->last = NULL;
    this->iCount = 0;
}

void SinglyCL :: Display()
{
    PNODE temp = NULL;

    if((this->first == NULL) && (this->last == NULL))
    {
        return;
    }

    temp = this->first;

    do
    {
        cout<<"| "<<temp->data<<" | -> ";
        temp = temp->next;

    }while(last->next != temp);
    cout<<"\n";
}

int SinglyCL :: Count()
{
    return this->iCount;
}
void SinglyCL :: InsertFirst(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        newn->next = this->first;

        this->first = newn;
    }

    (this->last)->next = this->first;

    iCount++;
}
void SinglyCL :: InsertLast(int iNo)
{
    PNODE newn = NULL;

    newn = new NODE;

    newn->data = iNo;
    newn->next = NULL;

    if((this->first == NULL) && (this->last == NULL))
    {
        this->first = newn;
        this->last = newn;
    }
    else
    {
        (this->last)->next = newn;
        
        this->last = newn;
    }
    (this->last)->next = this->first;

    iCount++;
}
void SinglyCL :: InsertAtPos(int iNo, int iPos)
{}
void SinglyCL :: DeleteFirst()
{
    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
    }
    else
    {
        first = first->next;

        delete last->next;

        last->next = first;
    }
    this->iCount--;
}
void SinglyCL :: DeleteLast()
{
    PNODE temp = NULL;

    if((first == NULL) && (last == NULL))
    {
        return;
    }
    else if(first == last)
    {
        delete first;
    }
    else
    {
        temp = first;

        while(temp->next != NULL)
        {
            temp = temp->next;
        }

        cout<<"Deleted element\n";
        delete temp->next;
        
        last = temp;

        last->next = first;
    }

    this->iCount--;
}
void SinglyCL :: DeleteAtPos(int iPos)
{}




int main()
{
    SinglyCL sobj;

    int iRet = 0;

    sobj.InsertFirst(51);
    sobj.InsertFirst(21);
    sobj.InsertFirst(11);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are: "<<iRet<<endl;

    sobj.InsertLast(101);
    sobj.InsertLast(111);
    sobj.InsertLast(121);

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are: "<<iRet<<endl;

    sobj.DeleteFirst();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are: "<<iRet<<endl;

    sobj.DeleteLast();

    sobj.Display();
    iRet = sobj.Count();
    cout<<"Number of Nodes are: "<<iRet<<endl;
}