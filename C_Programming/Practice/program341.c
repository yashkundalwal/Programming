// If Bit is On flip it

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iMask = 0xFFFFFFFF;

    printf("Before: %d\n", iMask);

    iMask = ~(iMask);

    printf("After: %d\n", iMask);

    return 0;
}