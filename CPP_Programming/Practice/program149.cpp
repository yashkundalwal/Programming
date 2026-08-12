#include<iostream>

using namespace std;

int main()
{
    int * Brr = NULL;
    int iLength = 0;
    int iCnt = 0;

    cout<<"Enter the number of Elements : \n";
    cin>> iLength ;

    Brr = new int[iLength];

    cout<<"Enter the Elements : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cin>> Brr[iCnt];
    }

    cout<<"Elements of the Array are : \n";

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        cout<< Brr[iCnt] << endl ;
    }

    delete []Brr;
    
    return 0;
}