////////////////////////////////////////////////////////////////////////////////////////
//
//     Header File Inclusion
//
////////////////////////////////////////////////////////////////////////////////////////

#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<fcntl.h>
#include<string.h>
#include<stdbool.h>

////////////////////////////////////////////////////////////////////////////////////////
//
//     User Defined Macros
//
////////////////////////////////////////////////////////////////////////////////////////

#define MAXINODE 10
#define MAXFILESIZE 50
#define MAXOPENFILES 10

#define READ 1
#define WRITE 2
#define EXECUTE 4

#define START 0
#define CURRENT 1
#define END 2

#define EXECUTE_SUCCESS 0

#define REGULARFILE 1
#define SPECIALFILE 2

////////////////////////////////////////////////////////////////////////////////////////
//
//     User Defined Macros for Error Handling
//
////////////////////////////////////////////////////////////////////////////////////////

#define ERR_INVALID_PARAMETER -1

#define ERR_NO_INODES -2

#define ERR_FILE_ALREADY_EXISTS -3
#define ERR_FILE_NOT_EXISTS -4

#define ERR_PERMISSION_DENIED -5

#define ERR_INSUFFICIENT_SPACE -6
#define ERR_INSUFFICIENT_DATA -7

#define ERR_MAX_FILES_OPEN -8

////////////////////////////////////////////////////////////////////////////////////////
//
//     Structure Name  :  BootBlock  
//     Description     :  It holds the information to
//                        Boot the Operating System
//
////////////////////////////////////////////////////////////////////////////////////////

struct BootBlock
{
    char Information[100];
};

////////////////////////////////////////////////////////////////////////////////////////
//
//     Structure Name  :  SuperBlock
//     Description     :  It holds the information of
//                        complete File System
//
////////////////////////////////////////////////////////////////////////////////////////

struct SuperBlock
{
    int TotalInodes;
    int FreeInodes;
};

////////////////////////////////////////////////////////////////////////////////////////
//
//     Structure Name  :  Inode
//     Description     :  It holds information of file
//
////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct Inode
{
    char FileName[20];
    int InodeNumber;
    int FileSize;
    int ActualFileSize;
    int FileType;
    int ReferenceCount;
    int Permission;
    char * Buffer;
    struct Inode * next;
};

typedef struct Inode INODE;
typedef struct Inode * PINODE;
typedef struct Inode * * PPINODE;

////////////////////////////////////////////////////////////////////////////////////////
//
//     Structure Name  :  FileTable
//     Description     :  It holds information of Opened
//                        Files
//
////////////////////////////////////////////////////////////////////////////////////////

#pragma pack(1)
struct FileTable
{
    int ReadOffset;
    int writeOffset;
    int Mode;
    PINODE ptrinode;  
};

typedef struct FileTable FILETABLE;
typedef struct FileTable * PFILETABLE;

////////////////////////////////////////////////////////////////////////////////////////
//
//     Structure Name  :  UAREA
//     Description     :  It holds information of process
//
////////////////////////////////////////////////////////////////////////////////////////

struct UAREA
{
    char ProcessName[20];
    PFILETABLE UFDT[MAXOPENFILES];
};

////////////////////////////////////////////////////////////////////////////////////////
//
//     Global Variables used in the Project
//
////////////////////////////////////////////////////////////////////////////////////////

struct BootBlock bootobj;
struct SuperBlock superobj;
struct UAREA uareaobj;

PINODE head = NULL;

////////////////////////////////////////////////////////////////////////////////////////
//
//     Function Name    :    InitialiseUAREA()
//     Description      :    It is used to initialise UAREA
//     Author           :    Yash Yogesh Kundalwal
//     Date             :    31/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////

void InitialiseUAREA()
{
    int i = 0;

    strcpy(uareaobj.ProcessName, "Myexe");

    for(i = 0; i < MAXOPENFILES ; i++)
    {
        uareaobj.UFDT[i] = NULL;
    }

    printf("Marvellous CVFS : UREA gets initialised successfully \n");
}

////////////////////////////////////////////////////////////////////////////////////////
//
//     Function Name    :    InitialiseSuperBlock()
//     Description      :    It is used to initialise Super Block
//     Author           :    Yash Yogesh Kundalwal
//     Date             :    31/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////

void InitialiseSuperBlock()
{
    superobj.TotalInodes = MAXINODE;
    superobj.FreeInodes = MAXINODE;

    printf("Marvellous CVFS : Super Block gets initialised successfully \n");
}

////////////////////////////////////////////////////////////////////////////////////////
//
//     Function Name    :    CreateDILB()
//     Description      :    It is used to create Linked List of Inodes
//     Author           :    Yash Yogesh Kundalwal
//     Date             :    31/07/2026
//
////////////////////////////////////////////////////////////////////////////////////////

void CreateDILB()
{
    PINODE newn = NULL;
    PINODE temp = NULL;
    int i = 0;

    temp = head;

    for(i = 1 ; i <= MAXINODE ; i++)
    {
        newn = (PINODE)malloc(sizeof(INODE));
        
        newn->InodeNumber = i;
        newn->FileSize = 0;
        newn->ActualFileSize = 0;
        newn->FileType = 0;
        newn->ReferenceCount = 0;
        newn->Permission = 0;
        newn->Buffer = NULL;
        newn->next = NULL;

        if(temp == NULL)
        {
            head = newn;
            temp = head;
        }
        else
        {
            temp->next = newn;
            temp = temp->next;
        }
    }

    printf("Marvellous CVFS : DILB gets created Successfully\n");
    
}

////////////////////////////////////////////////////////////////////////////////////////
//
//     Entry Point Function of the CVFS Project
//
////////////////////////////////////////////////////////////////////////////////////////

int main()
{
    InitialiseUAREA();

    InitialiseSuperBlock();

    CreateDILB();

    return 0;
}