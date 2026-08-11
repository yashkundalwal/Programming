#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{
    public :
        int *Arr;
        int iSize;
        

        //Default Constructor
        ArrayX()
        {

        }

        //Parameterised constructor
        ArrayX(int X)
        {

        }
};

int main()
{
    ArrayX aobj1;         //Default
    ArrayX aobj2(5);      //Parameterised

    cout<<sizeof(aobj1)<<endl; //12
    
    return 0;
}