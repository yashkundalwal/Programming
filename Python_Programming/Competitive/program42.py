# write a lambda function using file which accepts a list and returns a list of number divisible bye 3 and 5

Divisible = lambda No : (No % 3 == 0 and No % 5 == 0)

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print(f"Enter the {Size} elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = list(filter(Divisible, Data))

    print(Ret)
    
if __name__ == "__main__":
    main()