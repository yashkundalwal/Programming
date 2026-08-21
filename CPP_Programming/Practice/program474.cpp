#include<iostream>

using namespace std;

int Maximum(int No1, int No2)
{
    int Max;

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
    cout<<Maximum(21,11)<<endl;

    return 0;
}