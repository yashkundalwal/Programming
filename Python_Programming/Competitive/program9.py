# Accept one Number and print Cube of it

def Cube(iNo):

    iCube = iNo * iNo * iNo

    return iCube

def main():
    print("Enter the Number: ")
    iValue = int(input())

    iRet = Cube(iValue)

    print("Cube of the number is: ", iRet)

if __name__ == "__main__":
    main()

