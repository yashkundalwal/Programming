#include<stdio.h>

int main()
{
    char Arr[20] = {'\0'};

    int iRet = 0;

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    printf("String is: %s\n", Arr);

    return 0;
}