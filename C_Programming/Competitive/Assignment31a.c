#include<stdio.h>

int CountCapital(char *str)
{
    int iCnt = 0;

    if( str == NULL)
    {
        return 0;
    }

    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            iCnt++;
        }

        str++;
    }

    return iCnt;
}

int main()
{
    char Arr[20] = {'\0'};
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    iRet = CountCapital(Arr);

    printf("%d \n", iRet);

    return 0;
}