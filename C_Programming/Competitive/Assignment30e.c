#include<stdio.h>

void Display(char ch)
{
    if((ch >= 'A') && (ch <= 'Z'))
    {
        printf("Decimal: %d \n", ch);
        printf("HexaDecimal: %X \n", ch);
        printf("Octal: %o \n", ch);
    }
    else if((ch >= 'a') && (ch <= 'z'))
    {
        printf("Decimal: %d \n", ch);
        printf("HexaDecimal: %X \n", ch);
        printf("Octal: %o \n", ch);
    }
    else
    {
        printf("Invalid Input \n");
    }
}

int main()
{
    char cValue = '\0';

    printf("Enter the Character: \n");
    scanf("%c", &cValue);

    Display(cValue);

    return 0;
}