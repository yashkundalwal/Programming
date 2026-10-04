#include<stdio.h>

int FactorialDiff(int iNo)
{
    int iCnt = 0;
    int iEvenFact = 0;
    int iOddFact = 0;
    int iFactDiff = 0;

    if(iNo < 0)
    {
        iNo = -iNo;
    }
    
    iEvenFact = 1;

    for(iCnt = 2 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
    
        iEvenFact = iEvenFact * iCnt ;
    }

    iOddFact = 1;

    for(iCnt = 1 ; iCnt <= iNo ; iCnt = iCnt + 2)
    {
    
        iOddFact = iOddFact * iCnt ;
    }

    iFactDiff = iEvenFact - iOddFact ;

    return iFactDiff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d \n", &iValue);

    iRet = FactorialDiff(iValue);

    printf("Even Factorial of Number is : %d \n", iRet);
    
    return 0;
}