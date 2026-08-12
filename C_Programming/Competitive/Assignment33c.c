#include<stdio.h>

int FirstChar(char *str, char ch)
{

    int iCount = 0;
    int iIndex = 0;

    iIndex = -1;

    while(*str != '\0')
    {
        if(*str == ch)
        {
            iIndex = iCount;

            return iIndex;
        }
        
        str++;
        iCount++;
    }
    printf("\n");

}

int main()
{
    char Arr[20] = {'\0'};
    char cValue = '\0';
    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    printf("Enter the Character: \n");
    scanf(" %c", &cValue);

    printf("Entered Character: %c\n",cValue);

    iRet = FirstChar(Arr, cValue);

    printf("%d\n", iRet);

    return 0;
}