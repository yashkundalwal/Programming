#include<stdio.h>
#include<fcntl.h>
#include<string.h>
#include<unistd.h>

#define BUFFER_SIZE 1024
#define ERR_OPEN -1

int CountSmall(char * FileName)
{
    char Buffer[BUFFER_SIZE] = {'\0'};

    int fd = 0;
    int iRet = 0;
    int iCount = 0;
    int i = 0;

    fd = open(FileName,O_RDONLY);

    if(fd == -1)
    {
        return ERR_OPEN;
    }

    while((iRet = read(fd,Buffer,sizeof(Buffer))) != 0)
    {
        for(i = 0 ; i <= iRet ; i++)
        {
            if((Buffer[i] >= 'a') && (Buffer[i] <= 'z'))
            {
                iCount++;
            }
        }

        memset(Buffer,'\0',sizeof(Buffer));
    }

    close(fd);

    return iCount;
}

int main()
{
    char fName[30] = {'\0'};
    int iRet = 0;

    printf("Enter the file name: \n");
    scanf("%[^'\n']s", fName);

    iRet = CountSmall(fName);

    if(iRet == ERR_OPEN)
    {
        printf("Unable to Open File\n");
    }
    else
    {
        printf("Small Characters in file are: %d\n", iRet);
    }

    return 0;
}
