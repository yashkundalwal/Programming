# write a lambda function using reduce which accepts a list and returns additon of all numbers

from functools import reduce 

Addition = lambda No1, No2 : No1 + No2

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print("Enter the Elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = reduce(Addition, Data)

    print(f"Addition is: {Ret}") 
    
if __name__ == "__main__":
    main()