#Check if Number is prime or not

def ChkPrime(No):
    Cnt = 0
    
    for i in range(2, No):
        if(No % i == 0):
            break

        Cnt = Cnt + 1

    if(Cnt < No/2):
        return False
    else:
        return True



def main():

    Value = int(input("Enter the Number: "))

    Ret = ChkPrime(Value)

    if(Ret == True):
        print("Prime Number")
    else:
        print("Not a Prime Number")

if __name__ == "__main__":
    main()