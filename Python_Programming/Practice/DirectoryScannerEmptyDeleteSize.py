import sys
import os
import time
import schedule

def DirectoryScanner(DirectoryPath):
    Border = "-"*60
    timestamp = time.ctime()

    logFileName = "Marvellous%s.log"%(timestamp)

    logFileName = logFileName.replace(" ","_")
    logFileName = logFileName.replace(":","_")

    Ret = False

    Ret = os.path.exists(DirectoryPath)

    if(Ret == False):
    
        print("Marvellous Automation Error: There is no such Directory with name ",DirectoryPath)
        return
    
    Ret = os.path.isdir(DirectoryPath)

    if(Ret == False):

        print("Marvellous Automation Error: It is not a Directory with name ",DirectoryPath)
        return

    print("Log File gets created with Name: ", logFileName)

    fobj = open(logFileName, "w")

    fobj.write(Border+"\n")
    fobj.write("Marvellous Automation Script\n")
    fobj.write(Border+"\n\n")

    fobj.write("Files from The Directory are: \n\n")
    fobj.write(Border+"\n")
    
    for FolderName,SubFolder,FileName in os.walk(DirectoryPath):
        for fname in FileName:
            fname = os.path.join(FolderName,fname)
            fobj.write(fname+"\n")

            print(f"File name {fname} : {os.path.getsize(fname)} bytes")

    fobj.write(Border+"\n")
    fobj.write("Log gets Created at : "+ timestamp)
    fobj.write("\n"+Border+"\n")
    fobj.close()

def main():
    Border = "-"*80
    print(Border)
    print("MARVELLOUS AUTOMATION SCRIPT")
    print(Border)
    if(len(sys.argv) == 2):

        if(sys.argv[1] == "--h" or sys.argv[1] == "--H"):
            print("This Automation script is used to travel the Directory")
            print("For better usage please check --u flag")

        elif(sys.argv[1] == "--u" or sys.argv[1] == "--U"):
            print("Please execute the script as:")
            print("python FileName.py DirectoryName")
            print("Directory Name should be Absolute Path")

        else:
            #schedule.every(1).minutes.do(DirectoryScanner, sys.argv[1])

            DirectoryScanner(sys.argv[1])

            #while True:
                #schedule.run_pending()
                #time.sleep(1)

    else:
        print("Invalid Number of Arguments")
        print("Please use --h or --u for more information")

    print(Border)
    print("THANK YOU FOR USING MARVELLOUS AUTOMATION SCRIPT")
    print(Border)

if __name__ == "__main__":
    main()