// Take a Number from user and OFF its 4th bit if it is ON

#include<stdio.h>

typedef unsigned int UINT;

UINT OffBit(UINT iNo, UINT iPos)
{
    UINT iMask = 0xFFFFFFF7;
    UINT iResult = 0;

    if(iPos < 1 || iPos > 32)
    {
        printf("Invalid Bit Position \n");
        return iNo;
    }

    //iMask = iMask << (iPos - 1);

    iResult = iNo ^ iMask;

    return iResult;
}

int main()
{
    
    UINT iValue = 0;
    UINT iLocation = 0;
    UINT iRet = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iValue);

    printf("Enter the Position: \n");
    scanf("%d", &iLocation);

    iRet = OffBit(iValue, iLocation);

    printf("After toggle: %d\n", iRet);
    

    return 0;
}