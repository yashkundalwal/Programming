#include<stdio.h>

int  Factorial(int iNo)
{
    int iCnt = 0;
    int iFact = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }

    iFact = 1;

    for(iCnt = 1 ; iCnt = iNo/2  ; iCnt++)
    {
        iFact = (iNo * (iNo - 1) * iFact )  ;
        iNo = iNo - 2;
    }
    
    return iFact;
    
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d \n", &iValue);

    iRet = Factorial(iValue);

    printf("Factorial is : %d \n", iRet);
    
    return 0;
}