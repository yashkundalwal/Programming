#include<stdio.h>

void NonFact(int iNo)
{
    int i = 0;
    if(iNo <= 0)
    {
        iNo = -iNo;
    }

    for(i = 1 ; i <= iNo ; i++)
    {
        if(iNo%i != 0)
        {
            printf("%d \n", i);
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