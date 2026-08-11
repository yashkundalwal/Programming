#include<stdio.h>
#include<fcntl.h>
#include<string.h>


int main()
{
    char FileName[30] = {'\0'};
    int fd = 0;

    printf("Enter the File Name: \n");
    scanf("%[^'\n']s",FileName);

    fd = open(FileName,O_RDONLY);

    if(fd != -1)
    {
        printf("File Opened Successfully\n");
    }

    close(fd);
}