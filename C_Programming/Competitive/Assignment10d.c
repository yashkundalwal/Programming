#include<stdio.h>

int RangeSumEven(int iStart, int iEnd)
{
    int iSum = 0;
    
    if(iStart < 0)
    {
        return 0;
    }

    while(iEnd >= iStart)
    {

        if(iStart % 2 == 0)
        {
            iSum = iSum + iStart;
            iStart += 2;
        }
        else
        {
            iSum = iSum + iStart;
            iStart += 2;
        }
    }
    
    return iSum;

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;
    int iRet = 0;

    printf("Enter the number : \n");
    scanf("%d \n", &iValue1);

    printf("Enter the number : \n");
    scanf("%d \n", &iValue2);

    iRet = RangeSumEven(iValue1, iValue2);

    if(iRet == 0)
    {
        printf("Invalid Number \n");
    }
    else
    {
        printf("Sum of numbers in that range : %d \n", iRet);
    }
    
    return 0;
}