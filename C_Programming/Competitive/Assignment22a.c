#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt = 0;
    int ch = '\0';

    for(iCnt = 1, ch = 'A' ; iCnt <= iNo ; iCnt++, ch++)
    {
        printf("%c\n", ch);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : \n");
    scanf("%d", &iValue);

    Pattern(iValue);

    return 0;
}