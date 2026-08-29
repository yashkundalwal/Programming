# Accept n numbers from user and Return Addition of all elements in that list

def AddElements(Data):

    Sum = 0

    for no in Data:
        Sum = Sum + no

    return Sum

def main():
    Arr = list()

    Size = int(input("Enter Number of Elements: "))

    print("Enter the elements: ")

    for i in range(Size):
        i = int(input())
        Arr.append(i)

    Ret = AddElements(Arr)

    print("Addition of all elements is: ", Ret)

if __name__ == "__main__":
    main()