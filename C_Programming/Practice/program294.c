#include<stdio.h>

void ReverseDisplay(char *str)
{
    int i = 0;
    char *start = NULL;

    start = str;

    while(*str != '\0')
    {
        str++;
    }
    
    str--;

    while(start <= str)
    {
        printf("%s\n", str);
        str--;
    }

    printf("\n");
}

int main()
{
    char Arr[50] = {'\0'};

    printf("Enter the String: \n");
    scanf("%[^'\n']s", Arr);

    ReverseDisplay(Arr);

    return 0;
}