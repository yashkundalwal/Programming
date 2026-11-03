#include<iostream>

using namespace std;

template<class X>
X Maximum(X No1, X No2, X No3)
{
    X Max;

    if((No1 > No2) && (No1 > No3))
    {
        Max = No1;
    }
    else if((No2 > No1) && (No2 > No3))
    {
        Max = No2;
    }
    else
    {
        Max = No3;
    }

    return Max;
}

int main()
{
    cout<<Maximum(21.3f,11.5f,18.9f)<<endl;
    cout<<Maximum(21.3,11.5,56.3)<<endl;
    cout<<Maximum(21,51,7)<<endl;

    return 0;
}