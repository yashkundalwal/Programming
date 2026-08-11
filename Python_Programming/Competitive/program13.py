# Accept Number from user and return sum of its digit

def DigitSum(No):

    Sum = 0

    while(No != 0):
    
        Digit = No % 10

        Sum = Sum + Digit

        No = No // 10

    return Sum
    
def main():

    Value = int(input("Enter the Number: "))

    Ret = DigitSum(Value)

    print(Ret)

if __name__ == "__main__":
    main()