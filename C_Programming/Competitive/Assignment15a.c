#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            return 1;
        }
    }
}


int main()
{
    int *p = NULL;
    int iSize = 0;
    BOOL bRet = 0;
    int iCnt = 0;
    int iValue = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d", &iSize);
    printf("Size Entered = %d\n", iSize);

    p = (int *)malloc(iSize * sizeof(int));

    if(p == NULL)
    {
        printf("Unable to allocate memory \n");
        return -1;
    }

    printf("Enter the %d Elements : \n", iSize);
    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        scanf("%d", &p[iCnt]);
    }

    printf("Enter the Number to check : \n");
    scanf("%d", &iValue);

    bRet = Check(p, iSize, iValue);

    if(bRet == 1)
    {
        printf("%d is Present \n", iValue);
    }
    else
    {
        printf("%d is absent \n", iValue);
    }

    free(p);

    return 0;
}