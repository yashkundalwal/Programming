# Check if Number is divisible by 5 return True else False

def ChkDivisible(No):
    Flag = False

    if((No % 5) == 0):
    
        Flag = True
    
    else:
    
        Flag = False
    

    return Flag

def main():
    Value = 0

    print("Enter the Value: ")
    Value = int(input())

    Ret = ChkDivisible(Value)

    if(Ret == True):
        print("Number is Divisible")
    else:
        print("Number is not Divisible")

if __name__ == "__main__":
    main()