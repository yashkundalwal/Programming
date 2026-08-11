#include<stdio.h>

void RangeDisplayEven(int iStart, int iEnd)
{
    
    while(iEnd > iStart)
    {
        if(iStart % 2 == 0)
        {
            printf("%d \t", iStart);
            iStart += 2;
        }
        else
        {
            printf("%d \t", iStart + 1);
            iStart += 2;
        }
    }
    
    printf("\n");

}

int main()
{
    int iValue1 = 0;
    int iValue2 = 0;

    printf("Enter the number : \n");
    scanf("%d \n", &iValue1);

    printf("Enter the number : \n");
    scanf("%d \n", &iValue2);

    RangeDisplayEven(iValue1, iValue2);
    
    return 0;
}