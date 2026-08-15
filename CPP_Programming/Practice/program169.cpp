#include<iostream>

using namespace std;

#pragma pack(1)
class ArrayX
{
    private :
        int *Arr;
        int iSize;

    public :
    
        ArrayX(int X = 5)  //Default argument
        {
            iSize = X;           
            Arr = new int[iSize];   
        }

        ~ArrayX()
        {
            delete []Arr;           
        }

        void Accept()
        {
            int iCnt = 0;

            cout<<"Enter the Elements : \n";
            
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cin>>Arr[iCnt];
            }
        }

        void Display()
        {
            int iCnt = 0;

            cout<<"Elements of the array are : \n";
            
            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                cout << Arr[iCnt] << endl;
            }
        }

        int Summation()
        {
            int iCnt = 0;
            int iSum = 0;

            for(iCnt = 0 ; iCnt < iSize ; iCnt++)
            {
                iSum = iSum + Arr[iCnt];
            }

            return iSum;
        }
};

int main()
{
    ArrayX * aobj = NULL;

    int iLength = 0;

    int iRet = 0;

    cout<<"Enter the number of elements : \n";
    cin>>iLength ;

    aobj = new ArrayX(iLength);

    aobj->Accept();
    aobj->Display();

    iRet = aobj->Summation();

    cout<<"Summation is : "<<iRet<<endl;

    delete aobj;

    return 0;
}
