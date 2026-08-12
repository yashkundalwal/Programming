#include<stdio.h>

void StrCatX(char *str, char *ptr)
{

    while((*str != '\0'))
    {
        str++;
    }

    while(*ptr != '\0')
    {
        *str = *ptr;
        str++;
        ptr++;
    }

    *ptr = '\0';
}

int main()
{
    char Arr[50] = {'\0'};
    char Brr[50] = {'\0'};

    printf("Enter the String1: \n");
    scanf("%[^\n]", Arr);
    getchar();

    printf("Enter the String2: \n");
    scanf("%[^\n]", Brr);

    printf("String 1 is: %s\n", Arr);
    printf("String 2 is: %s\n", Brr);

    StrCatX(Arr,Brr);

    printf("Concatinated String is: %s\n", Arr);

    return 0;

}