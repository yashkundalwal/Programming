#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;
        int iSize;

        //Parameterised constructor
        ArrayX(int X)
        {
            cout<<"Inside Constructor"<<endl;

            iSize = X;               //Characteristics initialization
            Arr = new int[iSize];    //Resourse allocation
        }

        //Destructor
        ~ArrayX()
        {
            cout<<"Inside Destructor"<<endl;

            delete []Arr;            //Resource Deallocation
        }
};

int main()
{
    //Static memory allocation for object
    //ArrayX aobj(5);

    ArrayX * aobj1 = new ArrayX(5);
    
    
    return 0;
}