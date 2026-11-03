# Accept n numbers from user and Return Minimum element in that list

def MinElements(Data):

    Min = 0

    Min = Data[0]

    for no in Data:
        if(Min >= no):
            Min = no

    return Min

def main():
    Arr = list()

    Size = int(input("Enter Number of Elements: "))

    print("Enter the elements: ")

    for i in range(Size):
        i = int(input())
        Arr.append(i)

    Ret = MinElements(Arr)

    print("Minimum element is: ", Ret)

if __name__ == "__main__":
    main()