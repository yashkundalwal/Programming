//Take Number and position as input from user and toggle the bit

#include<stdio.h>

typedef unsigned int UINT;

int main()
{
    UINT iNo = 0;
    UINT iMask = 0x1;
    UINT iPos = 0;
    UINT iAns = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iNo);

    printf("Enter the Position: \n");
    scanf("%d", &iPos);

    iMask = iMask << (iPos - 1);

    iAns = iNo ^ iMask;

    printf("After toggle: %d\n", iAns);
    

    return 0;
}