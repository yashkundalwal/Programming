#include<stdio.h>

void Display(int iNO)
{
    int iCnt = 0;
    
    // Filter
    if(iNO < 0)
    {
        printf("Invalid Input \n");
        return ;
    }
    
    for(iCnt = 1 ; iCnt <= iNO ; iCnt++)
    {
        printf("%d\n", iCnt);
    }
}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf("Enter the frequency : ");
    scanf("%d", &iValue);

    // Iteration

    Display(iValue);
    
    return 0;
}

