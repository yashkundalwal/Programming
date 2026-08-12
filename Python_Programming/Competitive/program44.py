# write a lambda function using filter which accepts a list and returns list of odd Numbers

Odd = lambda No : (No % 2 != 0)

def main():

    Data = list()

    Size = int(input("Enter the size: "))

    print(f"Enter the {Size} elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = list(filter(Odd, Data))

    print(Ret)
    

if __name__ == "__main__":
    main()