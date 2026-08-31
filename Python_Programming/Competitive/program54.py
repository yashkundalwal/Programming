# displays first 10 even numbers on screen

def DisplayEven(No):

    Num = 2
    Count = 1

    while(Count <= No):
    
        print(Num)
        Num = Num + 2
        Count = Count + 1
        

    

def main():
    print("Enter the Number: ")
    Value = int(input())

    DisplayEven(Value)

if __name__ == "__main__":
    main()