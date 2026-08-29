//Accept number from user and check whether 17th bit of Number is ON/OFF

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x10000;
    UINT iAns = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("17th Bit is ON \n");
    }
    else
    {
        printf("17th Bit is OFF \n");
    }

    return 0;
}