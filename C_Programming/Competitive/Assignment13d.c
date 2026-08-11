#include<stdio.h>
#include<stdlib.h>

 void Display(int Arr[], int iLength)
{
    int iCnt = 0;

    for(iCnt = 0 ; iCnt < iLength ; iCnt++)
    {
        if(((Arr[iCnt] % 5) == 0) && ((Arr[iCnt] % 3) == 0))
        {
            printf("%d \n", Arr[iCnt]);
        }
    }
}


int main()
{
    int *p = NULL;
    int iSize = 0;
    int iRet = 0;
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

    Display(p, iSize);

    free(p);

    return 0;
}