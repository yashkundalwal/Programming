#include<stdio.h>
#include<stdlib.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL LinearSearch(int Arr[], int iSize)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == 11)
        {
            return TRUE ;     //Bad programming
        }
    }

    return FALSE;
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    BOOL bRet = FALSE ;
    int iCnt = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d \n", &iLength);

    printf("Enter the elements : \n");

    Brr = (int *)malloc(iLength * sizeof(int));

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d \n", &Brr[iCnt]);
    }

    bRet = LinearSearch(Brr, iLength);

    if(bRet == 1)
    {
        printf("Element is present \n");
    }

    else
    {
        printf("Element is not present \n");
    }

    free(Brr);

    return 0;
}