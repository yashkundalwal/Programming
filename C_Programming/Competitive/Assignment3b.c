/*
    Algorithm
        Start
            Take integer from user
            take its factor using for loop
            Print only even factors using if Statement
            Display the result
        Stop
*/

#include<stdio.h>

void DisplayFactor(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i < iNo ; i++)
    {
        if(iNo%i == 0)
        {
            if(i%2 == 0)
            {
                printf("%d \n", i);
            }
        }
    }

}

int main()
{
    int iValue = 0;

    printf("Enter Number : \n");
    scanf("%d \n", &iValue);

    DisplayFactor(iValue);

    return 0;
}