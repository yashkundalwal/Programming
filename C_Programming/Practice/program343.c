// Take a Number from user and Toggle its 7th bit and 3rd bit

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x00000044;
    UINT iResult = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iNo);

    iResult = iNo ^ iMask;

    printf("After toggle: %d\n", iResult);
    

    return 0;
}