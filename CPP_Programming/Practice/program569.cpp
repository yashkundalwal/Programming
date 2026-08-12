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
        bool BidirectionalSearch(int iNo);

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

bool Searching :: BidirectionalSearch(int iNo)
{
    bool bFlag = false;

    int iStart = 0;
    int iEnd = 0;

    iStart = 0;
    iEnd = iSize - 1;

    while(iStart <= iEnd)
    {
        if(Arr[iStart] == iNo || Arr[iEnd] == iNo)
        {
            bFlag = true;
            break;
        }

        iStart++;
        iEnd--;
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

    bRet = sobj.BidirectionalSearch(30);

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