# Accept one Number and print Square of it

def Square(iNo):

    iSquare = iNo * iNo

    return iSquare

def main():
    print("Enter the Number: ")
    iValue = int(input())

    iRet = Square(iValue)

    print("Square of the number is: ", iRet)

if __name__ == "__main__":
    main()

