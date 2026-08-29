//Accept number from user and check whether 3rd bit of Number is ON/OFF

#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

int main()
{
    unsigned int iNo = 0;
    unsigned int iMask = 4;
    unsigned int iAns = 0;

    printf("Enter the Number: \n");
    scanf("%d", &iNo);

    iAns = iNo & iMask;

    if(iAns == iMask)
    {
        printf("3rd Bit is ON \n");
    }
    else
    {
        printf("3rd Bit is OFF \n");
    }

    return 0;
}