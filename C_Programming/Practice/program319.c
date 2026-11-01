#include<stdio.h>

typedef unsigned int UNIT;

int main()
{
    UNIT iMask = 0x1;
    int iCnt = 0;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    printf("%X\n", iMask);
    iMask = iMask << 1;

    return 0;
}