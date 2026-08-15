#include<iostream>

using namespace std;

class ArrayX
{
    public:
        int *Arr;
        int Size;

        ArrayX(int No);

        ~ArrayX();

        void Accept();

        void Display();

        int Summation();
};

ArrayX :: ArrayX(int No)
{
    Size = No;
    Arr = new int[Size];
}

ArrayX :: ~ArrayX()
{
    delete []Arr ;
}

void ArrayX :: Accept()
{
    int i = 0;
    cout<<"Enter the Elements: \n";

    for(i = 0 ; i < Size ; i++)
    {
        cin>>Arr[i];
    }
}

void ArrayX :: Display()
{
    int i = 0;
    cout<<"Elements of the Array are: \n";

    for(i = 0 ; i < Size ; i++)
    {
        cout<<Arr[i]<<endl;
    }
}

int ArrayX :: Summation()
{
    int i = 0;
    int Sum = 0;

    for(i = 0 ; i < Size ; i++)
    {
        Sum = Sum + Arr[i];
    }

    return Sum;
}

int main()
{
    ArrayX aobj(5);
    int Ret = 0;

    aobj.Accept();
    aobj.Display();

    Ret = aobj.Summation();

    cout<<"Summation is: "<<Ret<<endl;

    return 0;
}