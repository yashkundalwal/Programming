# write a lambda function which accepts a Number and return true if number is even

Even = lambda No : No % 2 == 0

def main():

    Value = int(input("Enter the Number: "))

    Ret = Even(Value)

    print(Ret)
    

if __name__ == "__main__":
    main()