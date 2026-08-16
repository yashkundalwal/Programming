#include<stdio.h>

void Patterns (int iNo)
{
    int iCnt = 0;
    //Updater
    if(iNo <=0)
    {
        iNo = -iNo;
    }

    for(iCnt = 1 ; iCnt <= iNo ; iCnt++)
    {
        
        printf("$");
        printf(" ");
        printf("*");
        printf(" ");
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d \n", &iValue);

    Patterns(iValue);

    return 0;

}