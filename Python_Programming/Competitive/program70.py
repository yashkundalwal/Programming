# Accept n numbers from user, Pass it to a UserDefined module marvellousNum in which there is a Chk prime function, accept it in a list and return addition of that list

def SumPrime(Data):

    

    

def ListPrime(Data):

    PrimeList = list()

    for i in Data:
        i = ChkPrime(Data)
        PrimeList.append(i)

    


def main():
    Arr = list()

    Size = int(input("Enter Number of Elements: "))

    print("Enter the elements: ")

    for i in range(Size):
        i = int(input())
        Arr.append(i)

    ListPrime(Arr)

    print(f"Frequency of {Value} is: {Ret}")

if __name__ == "__main__":
    main()