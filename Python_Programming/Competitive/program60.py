# Accepts one Number from user and check whether it is prime or not

def CheckPrime(No):
    
    Flag = True

    if(No <= 1):
        Flag = False

    for i in range(2,(No//2)+1):
        if(No % i == 0):
            Flag = False
            break

    return Flag

def main():
    Value = int(input("Enter the Number: "))

    Ret = CheckPrime(Value)

    if(Ret == True):
    
        print("It is a Prime Number")
    
    else:
    
        print("It is not a Prime Number")
    

if __name__ == "__main__":
    main()