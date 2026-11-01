#include<stdio.h>
#include<stdlib.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL Check(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(Arr[iCnt] == 11)
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

    bRet = Check(p, iSize);

    if(bRet == 1)
    {
        printf("11 is Present \n");
    }
    else
    {
        printf("11 is absent \n");
    }

    free(p);

    return 0;
}