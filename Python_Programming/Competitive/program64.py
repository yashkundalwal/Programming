# Accept a number from user and Count its Digits

def CountDigits(No):
    Digit = 0
    iCount = 0

    while(No != 0):
        Digit = No % 10

        iCount = iCount + 1

        No = No // 10

    return iCount

def main():
    Value = int(input("Enter the Number: "))

    Ret = CountDigits(Value)

    print("Number of Digits are: ", Ret)

if __name__ == "__main__":
    main()