#include<stdio.h>

void StrCpyX(char *str, char *ptr)
{

    while(*str != '\0')
    {
        *ptr = *str;

        str++;
        ptr++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    StrCpyX(Arr,Brr);

    printf("Copied String is: %s\n", Brr);

    return 0;

}