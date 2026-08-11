#include<iostream>

using namespace std;

void Display(int Arr[], int Size)
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
    int Brr[] = {10,20,30,40,50};

    Display(Brr,5);

    return 0;
}