# write a lambda function which accepts a Number return Minimum Number

Minimum = lambda No1,No2 : No1 if No1 < No2 else No2

def main():

    Value1 = int(input("Enter the First Number: "))

    Value2 = int(input("Enter the Second Number: "))

    Ret = Minimum(Value1, Value2)

    print(Ret)
    

if __name__ == "__main__":
    main()