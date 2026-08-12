#include<stdio.h>

int CountCharacter(char *str, char ch)
{

    int iCount = 0;

    while(*str != '\0')
    {

        if(*str == ch)
        {
            iCount++;
        }
        
        str++;
    }
    printf("\n");

    return iCount;

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

    iRet = CountCharacter(Arr, cValue);

    printf("%d\n", iRet);

    return 0;
}