# Accept a Number from user and print its Binary Equivalent

def DecToBinary(No):
    
    Bin1 = 0
    Binary = ""

    while(No != 0):
        Bin1 = No % 2

        Binary = str(Bin1) + Binary        

        No = No // 2

    return Binary

        

def main():

    Value = int(input("Enter the Number: "))

    Ret = DecToBinary(Value)

    print(Ret)

if __name__ == "__main__":
    main()