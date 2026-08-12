// Generic(Conver it)

#include<iostream>

using namespace std;


#pragma pack(1)
struct node
{
    int data;
    struct node * lchild;
    struct node * rchild;
};

class tree
{
    private:
        struct node * first;
        int iCount;

    public:
        tree();
        void Insert(int iNo);
        void Inorder();
        void Preorder();
        void Postorder();
        bool Search(int iNo);
        int Count();
        int CountLeaf();
        int CountParent();
};

tree :: tree()
{
    this->first = NULL;
    this->iCount = 0;
}

void tree :: Insert(int iNo)
{
    struct node * newn = NULL;
    struct node * temp = NULL;

    newn = new struct node;

    newn->data = iNo;
    newn->lchild = NULL;
    newn->rchild = NULL;

    if(first == NULL)
    {
        first = newn;
        iCount++;
    }
    else
    {
        temp = first;

        while(1)
        {
            if(iNo > temp->data)
            {
                if(temp->rchild == NULL)
                {
                    temp->rchild = newn;
                    break;
                }
                temp = temp->rchild;
                iCount++;
            }
            else if(iNo < temp->data)
            {
                if(temp->lchild == NULL)
                {
                    temp->lchild = newn;
                    break;
                }
                temp = temp->lchild;
                iCount++;
            }
            else if(iNo == temp->data)
            {
                printf("Unable to Insert Duplicate Element\n");
                break;
            }
        }
    }

}

void tree :: Inorder()
{
    if(first != NULL)
    {
        Inorder();
        cout<<first->data<<endl;
        Inorder();
    }
}

void tree :: Preorder()
{}

void tree :: Postorder()
{}

bool tree :: Search(int iNo)
{
    bool bFlag = false;

    return bFlag;
}

int tree :: Count()
{
    return iCount;
}

int tree :: CountLeaf()
{
    return iCount;
}

int tree :: CountParent()
{
    return iCount;
}

int main()
{
    tree tobj;

    tobj.Insert(11);
    tobj.Insert(5);
    tobj.Insert(17);

    tobj.Insert(5);

    return 0;
}