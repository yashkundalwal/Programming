# Accepts string from user and return its length

def CountLength(StrX):

    Count = 0

    for i in StrX:
        Count = Count + 1

    return Count

def main():
    Str = input("Enter the String: ")

    Ret = CountLength(Str)

    print("Length of String is: ",Ret)

if __name__ == "__main__":
    main()