# Accept Two Number from user and print Addition, Substraction, Multiplication, Division

def Addition(iNo1, iNo2):
    iAns = iNo1 + iNo2

    return iAns

def Substraction(iNo1, iNo2):
    iAns = iNo1 - iNo2

    return iAns

def Multiplication(iNo1, iNo2):
    iAns = iNo1 * iNo2

    return iAns

def Division(iNo1, iNo2):
    iAns = iNo1 / iNo2

    return iAns

def main():
    print("Enter First Number: ")
    iValue1 = int(input())

    print("Enter Second Number: ")
    iValue2 = int(input())

    iRet = 0

    iRet = Addition(iValue1, iValue2)
    print("Addition is: ", iRet)

    iRet = Substraction(iValue1, iValue2)
    print("Substraction is: ", iRet)
    
    iRet = Multiplication(iValue1, iValue2)
    print("Multiplication is: ", iRet)

    iRet = Division(iValue1, iValue2)
    print("Division is: ", iRet)

if __name__ == "__main__":
    main()