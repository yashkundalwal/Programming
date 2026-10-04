# write a lambda function using filter which accepts a list of strings and returns a list of string greater than 5

Minimum = lambda s : len(s) > 5

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print(f"Enter the {Size} elements")

    for no in range(Size):
        no = input()
        Data.append(no)

    Ret = list(filter(Minimum, Data))

    print(f"Minimum value is: {Ret}")
    
if __name__ == "__main__":
    main()