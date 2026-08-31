#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>


int main()
{
    char FileName[30] = {'\0'};
    char Text[50] = {'\0'};
    int fd = 0;
    int iRet = 0;

    printf("Enter the File Name: \n");
    fgets(FileName,sizeof(FileName),stdin);

    printf("Enter the Text: \n");
    fgets(Text,sizeof(Text),stdin);

    fd = open(FileName,O_RDWR | O_APPEND);

    if(fd != -1)
    {
        printf("File Opened Successfully\n");
    }

    iRet = write(fd,Text,strlen(Text));

    printf("Written in file with %d bytes\n",iRet);

    close(fd);
}