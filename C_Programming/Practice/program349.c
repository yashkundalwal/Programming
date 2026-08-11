// Take a Number and location from user and Toggle given bits

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iResult = 0;
    UINT iMask1 = 0x1;
    UINT iMask2 = 0x1;
    UINT iMask = 0x0;

    printf("Enter the Number: \n");
    scanf("%d", &iNo);

    iMask1 = iMask1 << 2;
    iMask2 = iMask2 << 7;

    iMask = iMask1 | iMask2;

    iResult = iNo ^ iMask;

    printf("After toggle: %d\n", iResult);
    

    return 0;
}