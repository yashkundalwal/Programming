# Contains one function ChkGreater() that accepts two numbers and print the greater one

def ChkGreater(iNo1, iNo2):

    if(iNo1 > iNo2):
        print(iNo1, " is greater than ", iNo2)
    elif(iNo1 < iNo2):
        print(iNo2, " is greater than ", iNo1)
    else:
        print(iNo1, " equals to ", iNo2)

def main():
    print("Enter First Number: ")
    iValue1 = int(input())

    print("Enter Second Number: ")
    iValue2 = int(input())

    ChkGreater(iValue1, iValue2)

if __name__ == "__main__":
    main()

