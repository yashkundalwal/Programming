def ChkEven(No):
    if((No % 2) == 0):
        return True
    else:
        return False

def main():
    print("Enter Then Number: ")
    Value = int(input())

    Ret = ChkEven(Value)

    if(Ret == True):
        print("It's Even Number")
    else:
        print("It's Odd Number")    

if __name__ == "__main__":
    main()