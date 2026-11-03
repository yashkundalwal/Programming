#include<stdio.h>

void RangeDisplay(int iStart, int iEnd)
{

    
    while(iEnd >= iStart)
    {
        printf("%d \t", iStart);
        iStart++;
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

    RangeDisplay(iValue1, iValue2);
    
    return 0;
}