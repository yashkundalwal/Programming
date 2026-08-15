#include<stdio.h>

void StrCpyCap(char *str, char *ptr)
{

    while((*str != '\0'))
    {
        if((*str >= 'A') && (*str <= 'Z'))
        {
            *ptr = *str;

            ptr++;
        }
        str++;
    }
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    StrCpyCap(Arr,Brr);

    printf("Copied String is: %s\n", Brr);

    return 0;

}