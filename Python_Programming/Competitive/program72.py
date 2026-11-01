# A lambda function which accepts two parameter and return Multiplication of twp Numbers

Multiplication = lambda No1,No2 : No1 * No2

def main():
    Value1 = int(input("Enter the First Number: "))

    Value2 = int(input("Enter the Second Number: "))

    Ret = Multiplication(Value1, Value2)

    print("Multiplication of two numbers is: ", Ret)

if __name__ == "__main__":
    main()