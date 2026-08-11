# write a lambda function using filter which accepts a list and returns count of even number

EvenCount = lambda No : No % 2 == 0

def main():
    Data = list()

    Size = int(input("Enter the Size: "))

    print(f"Enter the {Size} elements: ")

    for no in range(Size):
        no = int(input())
        Data.append(no)

    Ret = list(filter(EvenCount, Data))

    print(Ret)

    #print(len(Ret))

    iCount = 0

    for i in Ret:
        iCount = iCount + 1

    print(iCount)
    
if __name__ == "__main__":
    main()