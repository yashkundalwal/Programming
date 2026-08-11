#include<stdio.h>

typedef int BOOL;
#define TRUE 1
#define FALSE 0

BOOL ChkVowel(char *str)
{
    BOOL bFlag = FALSE;

    if( str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if((*str == 'A') || *str == 'E' || *str == 'I' || *str == 'O' || *str == 'U' 
            || *str == 'a' || *str == 'e' || *str == 'i' || *str == 'o' || *str == 'u')
        {
            bFlag = TRUE;
        }
        str++;
    }

    return bFlag;
}

int main()
{
    char Arr[20] = {'\0'};
    BOOL bRet = FALSE;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    bRet = ChkVowel(Arr);

    if(bRet == TRUE)
    {
        printf("It contains Vowel \n");
    }
    else
    {
        printf("It does not contain Vowel \n");
    }

    return 0;
}