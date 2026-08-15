# Accept a Number from user and check if its a perfect Number

def ChkPerfect(No):
    
    Sum = 0

    for i in range(1,No):
        if(No % i == 0):
            Sum = Sum + i

    if(Sum == No):
        return True
    else:
        return False

def main():

    Value = int(input("Enter the Number: "))

    Ret = ChkPerfect(Value)

    if(Ret == True):
        print("It is a Perfect Number")
    else:
        print("Not a Perfect Number")

if __name__ == "__main__":
    main()