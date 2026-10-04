# write a lambda function which accept a Number return square of that Numbers

Sq = lambda No : No ** 2

def main():

    Value = int(input("Enter the Number: "))

    Ret = Sq(Value)

    print(Ret)

if __name__ == "__main__":
    main()