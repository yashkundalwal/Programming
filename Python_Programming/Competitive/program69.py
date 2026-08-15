# Accept n numbers and a Number from user and Check frequency of that Number

def ChkFrequency(Data, No):

    Count = 0

    for no in Data:
        if(no == No):
            Count = Count + 1

    return Count

def main():
    Arr = list()

    Size = int(input("Enter Number of Elements: "))

    print("Enter the elements: ")

    for i in range(Size):
        i = int(input())
        Arr.append(i)

    Value = int(input("Enter the Element to Search: "))

    Ret = ChkFrequency(Arr, Value)

    print(f"Frequency of {Value} is: {Ret}")

if __name__ == "__main__":
    main()