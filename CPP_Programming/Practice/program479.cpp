#include<iostream>

using namespace std;

template<class X>
X Maximum(X No1, X No2)
{
    X Max;

    if(No1 > No2)
    {
        Max = No1;
    }
    else
    {
        Max = No2;
    }

    return Max;
}

int main()
{
    cout<<Maximum(21.3f,11.5f)<<endl;
    cout<<Maximum(21.3,11.5)<<endl;
    cout<<Maximum(21,11)<<endl;

    return 0;
}