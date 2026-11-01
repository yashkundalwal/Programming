#include<iostream>

using namespace std;

float Maximum(float No1, float No2)
{
    float Max;

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

    return 0;
}