# Accept one Number and print factorial of that Number

def FactorialX(No):
    Fact = 1
    i = 1

    while(i < No):

        Fact = (i * No) * Fact

        i = i + 1
        No = No - 1

        if(i == No):
            Fact = Fact * i

    return Fact

def main():

    Value = int(input("Enter the Number: "))

    Ret = FactorialX(Value)

    print(Ret)

if __name__ == "__main__":
    main()