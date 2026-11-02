#include<stdio.h>

void MultipleDisplay(int iNo)
{
    int iCnt = 0;
    
    int iMul = 1;

    

        for(iCnt = 1 ; iCnt <= 5 ; iCnt++)
        {
        iMul = iNo * iCnt;
        printf("%d ", iMul);
        }
        
    

    
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d \n",&iValue);

    MultipleDisplay(iValue);

    return 0;
}