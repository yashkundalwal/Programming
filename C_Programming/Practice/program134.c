#include<stdio.h>
#include<stdlib.h>


typedef int BOOL;
#define TRUE 1
#define FALSE 0

// Time Complexity : O(N)

BOOL LinearSearch(int Arr[], int iSize, int iNo)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iSize ; iCnt++)
    {
        if(Arr[iCnt] == iNo)
        {
            break;
        }
    }

    if(iCnt < iSize)
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iLength = 0;
    int *Brr = NULL;
    BOOL bRet = FALSE ;
    int iCnt = 0;
    int iValue = 0;

    printf("Enter the number of Elements : \n");
    scanf("%d \n", &iLength);

    printf("Enter the elements : \n");

    Brr = (int *)malloc(iLength * sizeof(int));

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        scanf("%d \n", &Brr[iCnt]);
    }

    printf("Enter the element that you want to search : \n");
    scanf("%d \n", &iValue);

    bRet = LinearSearch(Brr, iLength, iValue);

    if(bRet == TRUE)
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