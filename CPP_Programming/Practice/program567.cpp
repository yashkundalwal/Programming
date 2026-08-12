#include<iostream>

using namespace std;

class Searching
{
    private:
        int * Arr;
        int iSize;

    public:
        Searching(int iNo);
        ~Searching();

        void Accept();
        void Display();

        bool LinearSearch(int iNo);

};

Searching :: Searching(int iNo)
{
    this->iSize = iNo;
    this->Arr = new int[iSize];
}

Searching :: ~Searching()
{
    delete []Arr;
}

void Searching :: Accept()
{
    int i = 0;
    cout<<"Enter the Elements: "<<endl;

    for(i = 0 ; i < iSize ; i++)
    {
        cin>> Arr[i];
    }
}

void Searching :: Display()
{
    int i = 0;
    cout<<"Elements of the Array are: "<<endl;

    for(i = 0 ; i < iSize ; i++)
    {
        cout<< Arr[i]<<endl;
    }
}

bool Searching :: LinearSearch(int iNo)
{
    bool bFlag = false;
    int i = 0;

    for(i = 0 ; i < iSize ; i++)
    {
        if(Arr[i] == iNo)
        {
            bFlag = true;
            break;
        }
    }

    return bFlag;
}

int main()
{
    bool bRet = false;

    Searching sobj(5);

    sobj.Accept();
    sobj.Display();

    bRet = sobj.LinearSearch(30);

    if(bRet == true)
    {
        cout<<"Element is present"<<endl;
    }
    else
    {
        cout<<"Element is not present"<<endl;
    }

    return 0;
}