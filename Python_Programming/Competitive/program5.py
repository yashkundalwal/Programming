# Accept one Number and print that many Number in Reverse Order

def printSequenceRev(iNo):
    i = 0

    for i in range(iNo, 0 , -1):
        print(i)

def main():
    print("Enter the Number: ")
    iValue = int(input())

    printSequenceRev(iValue)

if __name__ == "__main__":
    main()

