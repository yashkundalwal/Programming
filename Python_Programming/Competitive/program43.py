# write a lambda function using reduce which accepts a list and returns product of all number

from functools import reduce

Product = lambda No1, No2 : No1 * No2

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print(f"Enter the {Size} elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = reduce(Product, Data)

    print(Ret)
    
if __name__ == "__main__":
    main()