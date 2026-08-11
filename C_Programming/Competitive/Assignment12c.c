#include<stdio.h>

int CountRange(int iNo)
{
    int iDigit = 0;
    int iCount = 0;
    
    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    while(iNo != 0)
    {
        iDigit = iNo % 10 ;
        if(iDigit > 3 && iDigit < 7)
        {
            iCount++;
        }
        iNo = iNo / 10;
    }

    return iCount;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d \n", &iValue);

    iRet = CountRange(iValue);

    printf("Count of digits between range of 3 and 7 is : %d \n", iRet);
    
    return 0;
}