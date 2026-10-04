#include<stdio.h>

int Count(int iNo)
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
        if(iDigit < 6)
        {
            iCount++ ;
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

    iRet = Count(iValue);
    printf("Frequency of Digit less than 6 is : %d \n", iRet);
    
    return 0;
}