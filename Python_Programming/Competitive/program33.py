# write a lambda function which accepts two Number returns Addition

Addition = lambda No1,No2 : No1 + No2

def main():

    Value1 = int(input("Enter the First Number: "))

    Value2 = int(input("Enter the Second Number: "))

    Ret = Addition(Value1, Value2)

    print(Ret)
    

if __name__ == "__main__":
    main()