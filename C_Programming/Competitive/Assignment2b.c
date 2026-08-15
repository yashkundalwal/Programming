//Accept one Number from user and print that number of * on screen


#include<stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    while(iNo>iCnt)
    {
        printf("* \n");
        iNo--;
    }
}

int main()
{
    int iValue = 0;

    Dprintf("Enter Number : \n");
    scanf("%d \n", &iValue);   

    return 0;
}