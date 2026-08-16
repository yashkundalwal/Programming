#include<iostream>

using namespace std;

template<class T>
class ArrayX
{
    public:
        T *Arr;
        int Size;

        ArrayX(int No)
        {
            Size = No;
            Arr = new T[Size];
        }

        ~ArrayX()
        {
            delete []Arr ;
        }

        void Accept()
        {
            int i = 0;
            cout<<"Enter the Elements: \n";

            for(i = 0 ; i < Size ; i++)
            {
                cin>>Arr[i];
            }
        }

        void Display()
        {
            int i = 0;
            cout<<"Elements of the Array are: \n";

            for(i = 0 ; i < Size ; i++)
            {
                cout<<Arr[i]<<endl;
            }
        }

        T Summation()
        {
            int i = 0;
            T Sum = 0;

            for(i = 0 ; i < Size ; i++)
            {
                Sum = Sum + Arr[i];
            }

            return Sum;
        }
};

int main()
{
    ArrayX <float>aobj(5);
    int Ret = 0;

    aobj.Accept();
    aobj.Display();

    Ret = aobj.Summation();

    cout<<"Summation is: "<<Ret<<endl;

    return 0;
}