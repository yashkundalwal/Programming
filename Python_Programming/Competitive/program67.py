# Accept n numbers from user and Return maximum element in that list

def MaxElements(Data):

    Max = 0

    Max = Data[0]

    for no in Data:
        if(Max <= no):
            Max = no

    return Max

def main():
    Arr = list()

    Size = int(input("Enter Number of Elements: "))

    print("Enter the elements: ")

    for i in range(Size):
        i = int(input())
        Arr.append(i)

    Ret = MaxElements(Arr)

    print("Maximum element is: ", Ret)

if __name__ == "__main__":
    main()