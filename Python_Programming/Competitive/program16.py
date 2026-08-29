# Accept one Number and print its multiplication table

def PrintTable(No):

    for i in range(1,11):
        Mult = No * i
        print(Mult)

def main():

    Value = int(input("Enter the Number: "))

    PrintTable(Value)

if __name__ == "__main__":
    main()