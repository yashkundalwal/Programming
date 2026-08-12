# write a lambda function which accepts three Number returns largest number

LargestNum = lambda No1,No2,No3 : No1 if (No1 > No2 and No1 > No3) else (No2 if (No2 > No1 and No2 > No3) else No3)

def main():

    Value1 = int(input("Enter the First Number: "))

    Value2 = int(input("Enter the Second Number: "))

    Value3 = int(input("Enter the Third Number: "))

    Ret = LargestNum(Value1, Value2, Value3)

    print(Ret)
    

if __name__ == "__main__":
    main()