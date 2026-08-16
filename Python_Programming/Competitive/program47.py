# Check if Num is Even or Odd

def ChkEvenOdd(No):
    Flag = False

    if((No % 2) == 0):
    
        Flag = True
    
    else:
    
        Flag = False
    

    return Flag

def main():
    Value = 0

    print("Enter the Value: ")
    Value = int(input())

    Ret = ChkEvenOdd(Value)

    if(Ret == True):
        print("Number is Even")
    else:
        print("Number is Odd")

if __name__ == "__main__":
    main()