#include<iostream>

using namespace std;

void Display(double Arr[], int Size)
{
    int Cnt = 0;

    cout<<"Elements are: \n";

    for(Cnt = 0 ; Cnt < Size ; Cnt++)
    {
        cout<<Arr[Cnt]<<endl;
    }
}

int main()
{
    double Brr[] = {10.2,20.2,30.2,40.2,50.2};

    Display(Brr,5);

    return 0;
}