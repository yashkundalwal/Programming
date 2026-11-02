// STACK template

#include<iostream>
using namespace std;

struct node
{
    int data;
    struct node * next;
};

class Stack
{
    private:
        struct node *first;
        int iCount;

    public:
        Stack();
        void Push(int iNo);        //Insert First
        int Pop();                 //DeleteFirst
        int Peep();                //DeleteFirst
        void Display();
        int Count();        
};

Stack :: Stack()
{}
void Stack :: Push(int iNo)
{}
int Stack :: Pop()  
{
    return 0;
}               
int Stack :: Peep()
{
    return 0;
}                
void Stack :: Display()
{}
int Stack :: Count()
{
    return 0;
}

int main()
{   
    Stack sobj;

    return 0;
}