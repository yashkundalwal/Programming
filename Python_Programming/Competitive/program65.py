# Accept a number from user and Summation of its digits

def SumDigits(No):
    Digit = 0
    Sum = 0

    while(No != 0):
        Digit = No % 10

        Sum = Sum + Digit

        No = No // 10

    return Sum

def main():
    Value = int(input("Enter the Number: "))

    Ret = SumDigits(Value)

    print("Summation of Digits are: ", Ret)

if __name__ == "__main__":
    main()