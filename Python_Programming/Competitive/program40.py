# write a lambda function using reduce which accepts a list and returns Minimum of all elements

from functools import reduce 

Minimum = lambda No1, No2 : No1 if No1 < No2 else No2

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print(f"Enter the {Size} elements")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = reduce(Minimum, Data)

    print(f"Minimum value is: {Ret}")
    
if __name__ == "__main__":
    main()