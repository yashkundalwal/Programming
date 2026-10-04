# Accept a Number and print its factor

def printFactors(iNo):
    iCnt = 0
    iFactor = 0

    for iCnt in range(1,iNo+1):
        
        if(iNo % iCnt == 0):
            print(iCnt)


def main():

    print("Enter the Number: ")
    iValue = int(input())

    printFactors(iValue)

if __name__ == "__main__":
    main()