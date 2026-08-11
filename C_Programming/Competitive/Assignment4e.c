#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int iSumFactors = 0;
    int iSumNonfactors = 0;
    int iDiff = 0;

    for(iCnt = 1 ; iCnt < iNo ; iCnt++)
    {
        if(iNo%iCnt == 0)
        {
            iSumFactors = iSumFactors + iCnt;
        }

        else
        {
            iSumNonfactors = iSumNonfactors + iCnt;
        }
    }


    iDiff = iSumFactors - iSumNonfactors ;

    return iDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter Number : \n");
    scanf("%d \n", &iValue);

    iRet = FactDiff(iValue);

    printf("Summation of all factors is : %d \n", iRet);

    return 0;
}