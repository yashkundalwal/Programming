# A lambda function which accepts one parameter and return power of 2

Square = lambda x : x ** 2

def main():
    Value = int(input("Enter the Number: "))

    Ret = Square(Value)

    print("Value of its Square is: ", Ret)

if __name__ == "__main__":
    main()