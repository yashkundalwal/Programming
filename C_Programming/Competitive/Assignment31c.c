#include<stdio.h>

int Difference(char *str)
{
    int iCapital = 0;
    int iSmall = 0;

    if( str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCapital++;
        }
        else if(*str >= 'a' && *str <= 'z')
        {
            iSmall++;
        }

        str++;
    }

    return iSmall - iCapital;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = Difference(Arr);

    printf("%d \n", iRet);

    return 0;
}