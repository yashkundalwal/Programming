#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<stdlib.h>
#include<string.h>

int CountSpace(char Fname[])
{
    char Buffer[1024] = {'\0'};
    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    int i = 0;

    fd = open(Fname,O_RDONLY);

    if(fd == -1)
    {
        printf("Unable to open file \n");
        return -1;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0 ; i <= iRet ; i++)
        {
            if(Buffer[i] = ' ')
            {
                iCount++;
            }
        }
        memset(Buffer,'\0',sizeof(Buffer));
    }

    return iCount;
}

int main()
{
    char FileName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the Filename: \n");
    scanf("%[^'\n']s",FileName);

    iRet = CountSpace(FileName);

    printf("White Spaces in file are: %d\n",iRet);

    return 0;
}