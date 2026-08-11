#include<stdio.h>

void DisplayConvert(int CValue)
{
    if(CValue >= 'a' && CValue <= 'z')
    {
        printf("%c \n", CValue - 32);
    }

    else if(CValue >= 'A' && CValue <= 'Z')
    {
        printf("%c \n", CValue + 32);
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character : ");
    scanf("%c \n", &cValue);

    DisplayConvert(cValue);
    
    return 0;
}