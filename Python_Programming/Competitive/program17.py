# Accept one Number and print sum of first N natural Numbers

def SumNumbers(No):
    Sum = 0

    for i in range(1,(No + 1)):
        Sum = Sum + i
    
    return Sum

def main():

    Value = int(input("Enter the Number: "))

    Ret = SumNumbers(Value)

    print(Ret)

if __name__ == "__main__":
    main()