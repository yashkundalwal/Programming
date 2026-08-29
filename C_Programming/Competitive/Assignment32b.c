#include<stdio.h>
#include<string.h>

void struprx(char *str)
{
    while(*str != '\0')
    {
        if(*str >= 'a' && *str <= 'z')
        {
            *str = *str - 32;
        }
        str++;
    }
}

int main()
{
    char Arr[20] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    struprx(Arr);

    printf("Updated String is: %s\n", Arr);

    return 0;
}